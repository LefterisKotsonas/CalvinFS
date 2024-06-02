// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_reader.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "log_reader.pb.h"

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
class LogReaderStateDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LogReaderState> {
} _LogReaderState_default_instance_;

namespace protobuf_log_5freader_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogReaderState, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogReaderState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogReaderState, started_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogReaderState, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogReaderState, entry_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogReaderState, success_),
  2,
  1,
  0,
  3,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 9, sizeof(LogReaderState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LogReaderState_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "log_reader.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _LogReaderState_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _LogReaderState_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\020log_reader.proto\"`\n\016LogReaderState\022\026\n\007"
      "started\030\001 \001(\010:\005false\022\017\n\007version\030\002 \001(\004\022\r\n"
      "\005entry\030\003 \001(\014\022\026\n\007success\030\004 \001(\010:\005false"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 116);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "log_reader.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_log_5freader_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogReaderState::kStartedFieldNumber;
const int LogReaderState::kVersionFieldNumber;
const int LogReaderState::kEntryFieldNumber;
const int LogReaderState::kSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogReaderState::LogReaderState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_log_5freader_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LogReaderState)
}
LogReaderState::LogReaderState(const LogReaderState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  entry_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_entry()) {
    entry_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entry_);
  }
  ::memcpy(&version_, &from.version_,
    reinterpret_cast<char*>(&success_) -
    reinterpret_cast<char*>(&version_) + sizeof(success_));
  // @@protoc_insertion_point(copy_constructor:LogReaderState)
}

void LogReaderState::SharedCtor() {
  _cached_size_ = 0;
  entry_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, reinterpret_cast<char*>(&success_) -
    reinterpret_cast<char*>(&version_) + sizeof(success_));
}

LogReaderState::~LogReaderState() {
  // @@protoc_insertion_point(destructor:LogReaderState)
  SharedDtor();
}

void LogReaderState::SharedDtor() {
  entry_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LogReaderState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LogReaderState::descriptor() {
  protobuf_log_5freader_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_log_5freader_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LogReaderState& LogReaderState::default_instance() {
  protobuf_log_5freader_2eproto::InitDefaults();
  return *internal_default_instance();
}

LogReaderState* LogReaderState::New(::google::protobuf::Arena* arena) const {
  LogReaderState* n = new LogReaderState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LogReaderState::Clear() {
// @@protoc_insertion_point(message_clear_start:LogReaderState)
  if (has_entry()) {
    GOOGLE_DCHECK(!entry_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*entry_.UnsafeRawStringPointer())->clear();
  }
  if (_has_bits_[0 / 32] & 14u) {
    ::memset(&version_, 0, reinterpret_cast<char*>(&success_) -
      reinterpret_cast<char*>(&version_) + sizeof(success_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LogReaderState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LogReaderState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool started = 1 [default = false];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_started();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &started_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 version = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes entry = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_entry()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool success = 4 [default = false];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          set_has_success();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
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
  // @@protoc_insertion_point(parse_success:LogReaderState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LogReaderState)
  return false;
#undef DO_
}

void LogReaderState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LogReaderState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool started = 1 [default = false];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->started(), output);
  }

  // optional uint64 version = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->version(), output);
  }

  // optional bytes entry = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->entry(), output);
  }

  // optional bool success = 4 [default = false];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->success(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LogReaderState)
}

::google::protobuf::uint8* LogReaderState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LogReaderState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool started = 1 [default = false];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->started(), target);
  }

  // optional uint64 version = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->version(), target);
  }

  // optional bytes entry = 3;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->entry(), target);
  }

  // optional bool success = 4 [default = false];
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->success(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LogReaderState)
  return target;
}

size_t LogReaderState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LogReaderState)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional bytes entry = 3;
    if (has_entry()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->entry());
    }

    // optional uint64 version = 2;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->version());
    }

    // optional bool started = 1 [default = false];
    if (has_started()) {
      total_size += 1 + 1;
    }

    // optional bool success = 4 [default = false];
    if (has_success()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LogReaderState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LogReaderState)
  GOOGLE_DCHECK_NE(&from, this);
  const LogReaderState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogReaderState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LogReaderState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LogReaderState)
    MergeFrom(*source);
  }
}

void LogReaderState::MergeFrom(const LogReaderState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LogReaderState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_entry();
      entry_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entry_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000004u) {
      started_ = from.started_;
    }
    if (cached_has_bits & 0x00000008u) {
      success_ = from.success_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LogReaderState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LogReaderState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogReaderState::CopyFrom(const LogReaderState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LogReaderState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogReaderState::IsInitialized() const {
  return true;
}

void LogReaderState::Swap(LogReaderState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LogReaderState::InternalSwap(LogReaderState* other) {
  entry_.Swap(&other->entry_);
  std::swap(version_, other->version_);
  std::swap(started_, other->started_);
  std::swap(success_, other->success_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LogReaderState::GetMetadata() const {
  protobuf_log_5freader_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_log_5freader_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LogReaderState

// optional bool started = 1 [default = false];
bool LogReaderState::has_started() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LogReaderState::set_has_started() {
  _has_bits_[0] |= 0x00000004u;
}
void LogReaderState::clear_has_started() {
  _has_bits_[0] &= ~0x00000004u;
}
void LogReaderState::clear_started() {
  started_ = false;
  clear_has_started();
}
bool LogReaderState::started() const {
  // @@protoc_insertion_point(field_get:LogReaderState.started)
  return started_;
}
void LogReaderState::set_started(bool value) {
  set_has_started();
  started_ = value;
  // @@protoc_insertion_point(field_set:LogReaderState.started)
}

// optional uint64 version = 2;
bool LogReaderState::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LogReaderState::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
void LogReaderState::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
void LogReaderState::clear_version() {
  version_ = GOOGLE_ULONGLONG(0);
  clear_has_version();
}
::google::protobuf::uint64 LogReaderState::version() const {
  // @@protoc_insertion_point(field_get:LogReaderState.version)
  return version_;
}
void LogReaderState::set_version(::google::protobuf::uint64 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:LogReaderState.version)
}

// optional bytes entry = 3;
bool LogReaderState::has_entry() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LogReaderState::set_has_entry() {
  _has_bits_[0] |= 0x00000001u;
}
void LogReaderState::clear_has_entry() {
  _has_bits_[0] &= ~0x00000001u;
}
void LogReaderState::clear_entry() {
  entry_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_entry();
}
const ::std::string& LogReaderState::entry() const {
  // @@protoc_insertion_point(field_get:LogReaderState.entry)
  return entry_.GetNoArena();
}
void LogReaderState::set_entry(const ::std::string& value) {
  set_has_entry();
  entry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LogReaderState.entry)
}
#if LANG_CXX11
void LogReaderState::set_entry(::std::string&& value) {
  set_has_entry();
  entry_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LogReaderState.entry)
}
#endif
void LogReaderState::set_entry(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_entry();
  entry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LogReaderState.entry)
}
void LogReaderState::set_entry(const void* value, size_t size) {
  set_has_entry();
  entry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LogReaderState.entry)
}
::std::string* LogReaderState::mutable_entry() {
  set_has_entry();
  // @@protoc_insertion_point(field_mutable:LogReaderState.entry)
  return entry_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LogReaderState::release_entry() {
  // @@protoc_insertion_point(field_release:LogReaderState.entry)
  clear_has_entry();
  return entry_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LogReaderState::set_allocated_entry(::std::string* entry) {
  if (entry != NULL) {
    set_has_entry();
  } else {
    clear_has_entry();
  }
  entry_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), entry);
  // @@protoc_insertion_point(field_set_allocated:LogReaderState.entry)
}

// optional bool success = 4 [default = false];
bool LogReaderState::has_success() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void LogReaderState::set_has_success() {
  _has_bits_[0] |= 0x00000008u;
}
void LogReaderState::clear_has_success() {
  _has_bits_[0] &= ~0x00000008u;
}
void LogReaderState::clear_success() {
  success_ = false;
  clear_has_success();
}
bool LogReaderState::success() const {
  // @@protoc_insertion_point(field_get:LogReaderState.success)
  return success_;
}
void LogReaderState::set_success(bool value) {
  set_has_success();
  success_ = value;
  // @@protoc_insertion_point(field_set:LogReaderState.success)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)