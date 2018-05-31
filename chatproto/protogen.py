#!/bin/python

import os
import re

def file_name(path):
    return os.path.splitext(path)[0]

def file_extension(path):
    return os.path.splitext(path)[1]

def convert(input_string, delimiters):
    string_list = re.split(delimiters, input_string)
    first = string_list[0].capitalize()
    others = string_list[1:]
    others_capital = [word.capitalize() for word in others]
    others_capital[0:0] = [first]
    hump_string = ''.join(others_capital)
    return hump_string

def find_proto(path):
    proto_list = []
    for subdir, dirs, files in os.walk(path):
        for file in files:
            ext = file_extension(file)
            if ext == ".proto":
                proto_list.append(file)
    return proto_list

def find_msg(proto_list):
    package = "";
    pattern_package = re.compile(r'^package *(.*);')
    pattern_msg = re.compile(r'^message *(.*) *{')
    cnt = 0
    for proto in proto_list:
        msg_list = []
        ret = 0
        with open(proto, 'r') as fd:
            for line in fd:
                if pattern_package.match(line):
                    matches = pattern_package.findall(line)
                    package = matches[0]
                    package = convert(package, "\.|\_")
                    
                if (package != "") and (pattern_msg.match(line)):
                    matches = pattern_msg.findall(line)
                    message = matches[0]
                    message = message.strip()
                    message = package + message
                    msg_list.append(message)
                    ret = 1
        if ret == 1:
            gen_define_split("base_define.proto", proto, msg_list, cnt)
            cnt = (int)( cnt / 100 + 1 ) * 100
    return msg_list 

def gen_define(file_name):
    with open(file_name, 'w') as fd:
        fd.write('syntax = "proto2";\n')
        fd.write('option optimize_for = LITE_RUNTIME;\n')
        fd.write('\n')
        fd.write('package chat.base_define;\n')
        fd.write('\n')

def gen_define_split(file_name, proto_file, msg_list, cnt):
    proto_name = convert(proto_file, "\.|\_")
    with open(file_name, 'a') as fd:
        msg_list.sort()
        fd.write('enum Cmd' + proto_name  +'Id {\n')
        for msg in msg_list:
            cmd = "\tk" + msg + " = " + str(cnt) + ";\n"
            cnt += 1
            fd.write(cmd)
        fd.write('}\n')

def gen_header(file_name, proto_list):
    with open(file_name, 'w') as fd:
        fd.write('#pragma once\n')
        for proto in proto_list:
            name = os.path.splitext(proto)[0]
            line = '#include "' + name + '.pb.h"\n'
            fd.write(line)

if __name__ == '__main__':
    gen_define('base_define.proto')
    proto_list = find_proto("./")
    proto_list.sort()
    msg_list = find_msg(proto_list)
    gen_header('chat_msg.hpp', proto_list)

    for proto in proto_list:
        cmd = 'protoc -I=./ --cpp_out=./ --descriptor_set_out=proto.desc ' + proto
        os.system(cmd)
