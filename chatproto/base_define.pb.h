// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base_define.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_base_5fdefine_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_base_5fdefine_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_base_5fdefine_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_base_5fdefine_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace chat {
namespace base_define {

enum CmdClientProtoId : int {
  kChatClientPerson = 0
};
bool CmdClientProtoId_IsValid(int value);
constexpr CmdClientProtoId CmdClientProtoId_MIN = kChatClientPerson;
constexpr CmdClientProtoId CmdClientProtoId_MAX = kChatClientPerson;
constexpr int CmdClientProtoId_ARRAYSIZE = CmdClientProtoId_MAX + 1;

const std::string& CmdClientProtoId_Name(CmdClientProtoId value);
template<typename T>
inline const std::string& CmdClientProtoId_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CmdClientProtoId>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CmdClientProtoId_Name.");
  return CmdClientProtoId_Name(static_cast<CmdClientProtoId>(enum_t_value));
}
bool CmdClientProtoId_Parse(
    const std::string& name, CmdClientProtoId* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace base_define
}  // namespace chat

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::chat::base_define::CmdClientProtoId> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_base_5fdefine_2eproto
