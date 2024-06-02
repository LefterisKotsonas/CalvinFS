// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: batch.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "batch.pb.h"

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
class BatchDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Batch> {
} _Batch_default_instance_;

namespace protobuf_batch_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Batch, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Batch, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Batch, entries_),
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(Batch)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Batch_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "batch.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Batch_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Batch_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\013batch.proto\"\030\n\005Batch\022\017\n\007entries\030\001 \003(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 39);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "batch.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_batch_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Batch::kEntriesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Batch::Batch()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_batch_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Batch)
}
Batch::Batch(const Batch& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      entries_(from.entries_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Batch)
}

void Batch::SharedCtor() {
  _cached_size_ = 0;
}

Batch::~Batch() {
  // @@protoc_insertion_point(destructor:Batch)
  SharedDtor();
}

void Batch::SharedDtor() {
}

void Batch::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Batch::descriptor() {
  protobuf_batch_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_batch_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Batch& Batch::default_instance() {
  protobuf_batch_2eproto::InitDefaults();
  return *internal_default_instance();
}

Batch* Batch::New(::google::protobuf::Arena* arena) const {
  Batch* n = new Batch;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Batch::Clear() {
// @@protoc_insertion_point(message_clear_start:Batch)
  entries_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Batch::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Batch)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes entries = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_entries()));
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
  // @@protoc_insertion_point(parse_success:Batch)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Batch)
  return false;
#undef DO_
}

void Batch::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Batch)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes entries = 1;
  for (int i = 0, n = this->entries_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->entries(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Batch)
}

::google::protobuf::uint8* Batch::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Batch)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes entries = 1;
  for (int i = 0, n = this->entries_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(1, this->entries(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Batch)
  return target;
}

size_t Batch::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Batch)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated bytes entries = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->entries_size());
  for (int i = 0, n = this->entries_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->entries(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Batch::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Batch)
  GOOGLE_DCHECK_NE(&from, this);
  const Batch* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Batch>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Batch)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Batch)
    MergeFrom(*source);
  }
}

void Batch::MergeFrom(const Batch& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Batch)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  entries_.MergeFrom(from.entries_);
}

void Batch::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Batch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Batch::CopyFrom(const Batch& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Batch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Batch::IsInitialized() const {
  return true;
}

void Batch::Swap(Batch* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Batch::InternalSwap(Batch* other) {
  entries_.InternalSwap(&other->entries_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Batch::GetMetadata() const {
  protobuf_batch_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_batch_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Batch

// repeated bytes entries = 1;
int Batch::entries_size() const {
  return entries_.size();
}
void Batch::clear_entries() {
  entries_.Clear();
}
const ::std::string& Batch::entries(int index) const {
  // @@protoc_insertion_point(field_get:Batch.entries)
  return entries_.Get(index);
}
::std::string* Batch::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:Batch.entries)
  return entries_.Mutable(index);
}
void Batch::set_entries(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Batch.entries)
  entries_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Batch::set_entries(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:Batch.entries)
  entries_.Mutable(index)->assign(std::move(value));
}
#endif
void Batch::set_entries(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  entries_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Batch.entries)
}
void Batch::set_entries(int index, const void* value, size_t size) {
  entries_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Batch.entries)
}
::std::string* Batch::add_entries() {
  // @@protoc_insertion_point(field_add_mutable:Batch.entries)
  return entries_.Add();
}
void Batch::add_entries(const ::std::string& value) {
  entries_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Batch.entries)
}
#if LANG_CXX11
void Batch::add_entries(::std::string&& value) {
  entries_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Batch.entries)
}
#endif
void Batch::add_entries(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  entries_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Batch.entries)
}
void Batch::add_entries(const void* value, size_t size) {
  entries_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Batch.entries)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Batch::entries() const {
  // @@protoc_insertion_point(field_list:Batch.entries)
  return entries_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Batch::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:Batch.entries)
  return &entries_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)