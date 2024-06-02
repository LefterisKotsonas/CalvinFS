// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cluster_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cluster_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class MachineInfoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MachineInfo> {
} _MachineInfo_default_instance_;
class ClusterConfigProtoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ClusterConfigProto> {
} _ClusterConfigProto_default_instance_;

namespace protobuf_cluster_5fconfig_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineInfo, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineInfo, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineInfo, host_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineInfo, port_),
  1,
  0,
  2,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClusterConfigProto, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClusterConfigProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClusterConfigProto, machines_),
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(MachineInfo)},
  { 11, 17, sizeof(ClusterConfigProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_MachineInfo_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ClusterConfigProto_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cluster_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _MachineInfo_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _ClusterConfigProto_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _MachineInfo_default_instance_.DefaultConstruct();
  _ClusterConfigProto_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\024cluster_config.proto\"5\n\013MachineInfo\022\n\n"
      "\002id\030\001 \001(\004\022\014\n\004host\030\002 \001(\t\022\014\n\004port\030\003 \001(\005\"4\n"
      "\022ClusterConfigProto\022\036\n\010machines\030\001 \003(\0132\014."
      "MachineInfo"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 131);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cluster_config.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cluster_5fconfig_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MachineInfo::kIdFieldNumber;
const int MachineInfo::kHostFieldNumber;
const int MachineInfo::kPortFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MachineInfo::MachineInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cluster_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MachineInfo)
}
MachineInfo::MachineInfo(const MachineInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  host_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_host()) {
    host_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_);
  }
  ::memcpy(&id_, &from.id_,
    reinterpret_cast<char*>(&port_) -
    reinterpret_cast<char*>(&id_) + sizeof(port_));
  // @@protoc_insertion_point(copy_constructor:MachineInfo)
}

void MachineInfo::SharedCtor() {
  _cached_size_ = 0;
  host_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, reinterpret_cast<char*>(&port_) -
    reinterpret_cast<char*>(&id_) + sizeof(port_));
}

MachineInfo::~MachineInfo() {
  // @@protoc_insertion_point(destructor:MachineInfo)
  SharedDtor();
}

void MachineInfo::SharedDtor() {
  host_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MachineInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MachineInfo::descriptor() {
  protobuf_cluster_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cluster_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MachineInfo& MachineInfo::default_instance() {
  protobuf_cluster_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

MachineInfo* MachineInfo::New(::google::protobuf::Arena* arena) const {
  MachineInfo* n = new MachineInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MachineInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:MachineInfo)
  if (has_host()) {
    GOOGLE_DCHECK(!host_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*host_.UnsafeRawStringPointer())->clear();
  }
  if (_has_bits_[0 / 32] & 6u) {
    ::memset(&id_, 0, reinterpret_cast<char*>(&port_) -
      reinterpret_cast<char*>(&id_) + sizeof(port_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MachineInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MachineInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string host = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->host().data(), this->host().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MachineInfo.host");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 port = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          set_has_port();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MachineInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MachineInfo)
  return false;
#undef DO_
}

void MachineInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MachineInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 id = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->id(), output);
  }

  // optional string host = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->host().data(), this->host().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MachineInfo.host");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->host(), output);
  }

  // optional int32 port = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->port(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MachineInfo)
}

::google::protobuf::uint8* MachineInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MachineInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->id(), target);
  }

  // optional string host = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->host().data(), this->host().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MachineInfo.host");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->host(), target);
  }

  // optional int32 port = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->port(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MachineInfo)
  return target;
}

size_t MachineInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MachineInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string host = 2;
    if (has_host()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->host());
    }

    // optional uint64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->id());
    }

    // optional int32 port = 3;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MachineInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MachineInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const MachineInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MachineInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MachineInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MachineInfo)
    MergeFrom(*source);
  }
}

void MachineInfo::MergeFrom(const MachineInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MachineInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_host();
      host_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      port_ = from.port_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MachineInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MachineInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MachineInfo::CopyFrom(const MachineInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MachineInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MachineInfo::IsInitialized() const {
  return true;
}

void MachineInfo::Swap(MachineInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MachineInfo::InternalSwap(MachineInfo* other) {
  host_.Swap(&other->host_);
  std::swap(id_, other->id_);
  std::swap(port_, other->port_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MachineInfo::GetMetadata() const {
  protobuf_cluster_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cluster_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MachineInfo

// optional uint64 id = 1;
bool MachineInfo::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MachineInfo::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
void MachineInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void MachineInfo::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
::google::protobuf::uint64 MachineInfo::id() const {
  // @@protoc_insertion_point(field_get:MachineInfo.id)
  return id_;
}
void MachineInfo::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:MachineInfo.id)
}

// optional string host = 2;
bool MachineInfo::has_host() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MachineInfo::set_has_host() {
  _has_bits_[0] |= 0x00000001u;
}
void MachineInfo::clear_has_host() {
  _has_bits_[0] &= ~0x00000001u;
}
void MachineInfo::clear_host() {
  host_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_host();
}
const ::std::string& MachineInfo::host() const {
  // @@protoc_insertion_point(field_get:MachineInfo.host)
  return host_.GetNoArena();
}
void MachineInfo::set_host(const ::std::string& value) {
  set_has_host();
  host_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MachineInfo.host)
}
#if LANG_CXX11
void MachineInfo::set_host(::std::string&& value) {
  set_has_host();
  host_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MachineInfo.host)
}
#endif
void MachineInfo::set_host(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_host();
  host_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MachineInfo.host)
}
void MachineInfo::set_host(const char* value, size_t size) {
  set_has_host();
  host_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MachineInfo.host)
}
::std::string* MachineInfo::mutable_host() {
  set_has_host();
  // @@protoc_insertion_point(field_mutable:MachineInfo.host)
  return host_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MachineInfo::release_host() {
  // @@protoc_insertion_point(field_release:MachineInfo.host)
  clear_has_host();
  return host_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MachineInfo::set_allocated_host(::std::string* host) {
  if (host != NULL) {
    set_has_host();
  } else {
    clear_has_host();
  }
  host_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), host);
  // @@protoc_insertion_point(field_set_allocated:MachineInfo.host)
}

// optional int32 port = 3;
bool MachineInfo::has_port() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MachineInfo::set_has_port() {
  _has_bits_[0] |= 0x00000004u;
}
void MachineInfo::clear_has_port() {
  _has_bits_[0] &= ~0x00000004u;
}
void MachineInfo::clear_port() {
  port_ = 0;
  clear_has_port();
}
::google::protobuf::int32 MachineInfo::port() const {
  // @@protoc_insertion_point(field_get:MachineInfo.port)
  return port_;
}
void MachineInfo::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
  // @@protoc_insertion_point(field_set:MachineInfo.port)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClusterConfigProto::kMachinesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClusterConfigProto::ClusterConfigProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cluster_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClusterConfigProto)
}
ClusterConfigProto::ClusterConfigProto(const ClusterConfigProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      machines_(from.machines_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ClusterConfigProto)
}

void ClusterConfigProto::SharedCtor() {
  _cached_size_ = 0;
}

ClusterConfigProto::~ClusterConfigProto() {
  // @@protoc_insertion_point(destructor:ClusterConfigProto)
  SharedDtor();
}

void ClusterConfigProto::SharedDtor() {
}

void ClusterConfigProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClusterConfigProto::descriptor() {
  protobuf_cluster_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cluster_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ClusterConfigProto& ClusterConfigProto::default_instance() {
  protobuf_cluster_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

ClusterConfigProto* ClusterConfigProto::New(::google::protobuf::Arena* arena) const {
  ClusterConfigProto* n = new ClusterConfigProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClusterConfigProto::Clear() {
// @@protoc_insertion_point(message_clear_start:ClusterConfigProto)
  machines_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ClusterConfigProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ClusterConfigProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .MachineInfo machines = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_machines()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ClusterConfigProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ClusterConfigProto)
  return false;
#undef DO_
}

void ClusterConfigProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ClusterConfigProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .MachineInfo machines = 1;
  for (unsigned int i = 0, n = this->machines_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->machines(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ClusterConfigProto)
}

::google::protobuf::uint8* ClusterConfigProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClusterConfigProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .MachineInfo machines = 1;
  for (unsigned int i = 0, n = this->machines_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->machines(i), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClusterConfigProto)
  return target;
}

size_t ClusterConfigProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClusterConfigProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .MachineInfo machines = 1;
  {
    unsigned int count = this->machines_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->machines(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClusterConfigProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ClusterConfigProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ClusterConfigProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ClusterConfigProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ClusterConfigProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ClusterConfigProto)
    MergeFrom(*source);
  }
}

void ClusterConfigProto::MergeFrom(const ClusterConfigProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ClusterConfigProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  machines_.MergeFrom(from.machines_);
}

void ClusterConfigProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ClusterConfigProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClusterConfigProto::CopyFrom(const ClusterConfigProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClusterConfigProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClusterConfigProto::IsInitialized() const {
  return true;
}

void ClusterConfigProto::Swap(ClusterConfigProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClusterConfigProto::InternalSwap(ClusterConfigProto* other) {
  machines_.InternalSwap(&other->machines_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ClusterConfigProto::GetMetadata() const {
  protobuf_cluster_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cluster_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClusterConfigProto

// repeated .MachineInfo machines = 1;
int ClusterConfigProto::machines_size() const {
  return machines_.size();
}
void ClusterConfigProto::clear_machines() {
  machines_.Clear();
}
const ::MachineInfo& ClusterConfigProto::machines(int index) const {
  // @@protoc_insertion_point(field_get:ClusterConfigProto.machines)
  return machines_.Get(index);
}
::MachineInfo* ClusterConfigProto::mutable_machines(int index) {
  // @@protoc_insertion_point(field_mutable:ClusterConfigProto.machines)
  return machines_.Mutable(index);
}
::MachineInfo* ClusterConfigProto::add_machines() {
  // @@protoc_insertion_point(field_add:ClusterConfigProto.machines)
  return machines_.Add();
}
::google::protobuf::RepeatedPtrField< ::MachineInfo >*
ClusterConfigProto::mutable_machines() {
  // @@protoc_insertion_point(field_mutable_list:ClusterConfigProto.machines)
  return &machines_;
}
const ::google::protobuf::RepeatedPtrField< ::MachineInfo >&
ClusterConfigProto::machines() const {
  // @@protoc_insertion_point(field_list:ClusterConfigProto.machines)
  return machines_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)