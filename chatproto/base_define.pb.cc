// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base_define.proto

#include "base_define.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace chat {
namespace base_define {
}  // namespace base_define
}  // namespace chat
namespace chat {
namespace base_define {
bool CmdClientProtoId_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CmdClientProtoId_strings[1] = {};

static const char CmdClientProtoId_names[] =
  "kChatClientPerson";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry CmdClientProtoId_entries[] = {
  { {CmdClientProtoId_names + 0, 17}, 0 },
};

static const int CmdClientProtoId_entries_by_number[] = {
  0, // 0 -> kChatClientPerson
};

const std::string& CmdClientProtoId_Name(
    CmdClientProtoId value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          CmdClientProtoId_entries,
          CmdClientProtoId_entries_by_number,
          1, CmdClientProtoId_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      CmdClientProtoId_entries,
      CmdClientProtoId_entries_by_number,
      1, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     CmdClientProtoId_strings[idx].get();
}
bool CmdClientProtoId_Parse(
    const std::string& name, CmdClientProtoId* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      CmdClientProtoId_entries, 1, name, &int_value);
  if (success) {
    *value = static_cast<CmdClientProtoId>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace base_define
}  // namespace chat
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
