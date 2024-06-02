// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: report.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "report.pb.h"

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
class Report_DatumDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Report_Datum> {
} _Report_Datum_default_instance_;
class ReportDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Report> {
} _Report_default_instance_;

namespace protobuf_report_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report_Datum, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report_Datum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report_Datum, quantity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report_Datum, value_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, app_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, data_),
  0,
  1,
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(Report_Datum)},
  { 9, 17, sizeof(Report)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Report_Datum_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Report_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "report.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Report_Datum_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Report_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_scalar_2eproto::InitDefaults();
  _Report_Datum_default_instance_.DefaultConstruct();
  _Report_default_instance_.DefaultConstruct();
  _Report_Datum_default_instance_.get_mutable()->value_ = const_cast< ::Scalar*>(
      ::Scalar::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\014report.proto\032\014scalar.proto\"s\n\006Report\022\013"
      "\n\003app\030\001 \001(\t\022\014\n\004time\030\002 \001(\001\022\033\n\004data\030\003 \003(\0132"
      "\r.Report.Datum\0321\n\005Datum\022\020\n\010quantity\030\001 \001("
      "\t\022\026\n\005value\030\002 \001(\0132\007.Scalar"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "report.proto", &protobuf_RegisterTypes);
  ::protobuf_scalar_2eproto::AddDescriptors();
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

}  // namespace protobuf_report_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Report_Datum::kQuantityFieldNumber;
const int Report_Datum::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Report_Datum::Report_Datum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_report_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Report.Datum)
}
Report_Datum::Report_Datum(const Report_Datum& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  quantity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_quantity()) {
    quantity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.quantity_);
  }
  if (from.has_value()) {
    value_ = new ::Scalar(*from.value_);
  } else {
    value_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:Report.Datum)
}

void Report_Datum::SharedCtor() {
  _cached_size_ = 0;
  quantity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = NULL;
}

Report_Datum::~Report_Datum() {
  // @@protoc_insertion_point(destructor:Report.Datum)
  SharedDtor();
}

void Report_Datum::SharedDtor() {
  quantity_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete value_;
  }
}

void Report_Datum::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Report_Datum::descriptor() {
  protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Report_Datum& Report_Datum::default_instance() {
  protobuf_report_2eproto::InitDefaults();
  return *internal_default_instance();
}

Report_Datum* Report_Datum::New(::google::protobuf::Arena* arena) const {
  Report_Datum* n = new Report_Datum;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Report_Datum::Clear() {
// @@protoc_insertion_point(message_clear_start:Report.Datum)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_quantity()) {
      GOOGLE_DCHECK(!quantity_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*quantity_.UnsafeRawStringPointer())->clear();
    }
    if (has_value()) {
      GOOGLE_DCHECK(value_ != NULL);
      value_->::Scalar::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Report_Datum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Report.Datum)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string quantity = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_quantity()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->quantity().data(), this->quantity().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Report.Datum.quantity");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .Scalar value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_value()));
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
  // @@protoc_insertion_point(parse_success:Report.Datum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Report.Datum)
  return false;
#undef DO_
}

void Report_Datum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Report.Datum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string quantity = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->quantity().data(), this->quantity().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Report.Datum.quantity");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->quantity(), output);
  }

  // optional .Scalar value = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->value_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Report.Datum)
}

::google::protobuf::uint8* Report_Datum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Report.Datum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string quantity = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->quantity().data(), this->quantity().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Report.Datum.quantity");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->quantity(), target);
  }

  // optional .Scalar value = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->value_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Report.Datum)
  return target;
}

size_t Report_Datum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Report.Datum)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional string quantity = 1;
    if (has_quantity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->quantity());
    }

    // optional .Scalar value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->value_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Report_Datum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Report.Datum)
  GOOGLE_DCHECK_NE(&from, this);
  const Report_Datum* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Report_Datum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Report.Datum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Report.Datum)
    MergeFrom(*source);
  }
}

void Report_Datum::MergeFrom(const Report_Datum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Report.Datum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_quantity();
      quantity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.quantity_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_value()->::Scalar::MergeFrom(from.value());
    }
  }
}

void Report_Datum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Report.Datum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Report_Datum::CopyFrom(const Report_Datum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Report.Datum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Report_Datum::IsInitialized() const {
  if (has_value()) {
    if (!this->value_->IsInitialized()) return false;
  }
  return true;
}

void Report_Datum::Swap(Report_Datum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Report_Datum::InternalSwap(Report_Datum* other) {
  quantity_.Swap(&other->quantity_);
  std::swap(value_, other->value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Report_Datum::GetMetadata() const {
  protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Report_Datum

// optional string quantity = 1;
bool Report_Datum::has_quantity() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Report_Datum::set_has_quantity() {
  _has_bits_[0] |= 0x00000001u;
}
void Report_Datum::clear_has_quantity() {
  _has_bits_[0] &= ~0x00000001u;
}
void Report_Datum::clear_quantity() {
  quantity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_quantity();
}
const ::std::string& Report_Datum::quantity() const {
  // @@protoc_insertion_point(field_get:Report.Datum.quantity)
  return quantity_.GetNoArena();
}
void Report_Datum::set_quantity(const ::std::string& value) {
  set_has_quantity();
  quantity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Report.Datum.quantity)
}
#if LANG_CXX11
void Report_Datum::set_quantity(::std::string&& value) {
  set_has_quantity();
  quantity_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Report.Datum.quantity)
}
#endif
void Report_Datum::set_quantity(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_quantity();
  quantity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Report.Datum.quantity)
}
void Report_Datum::set_quantity(const char* value, size_t size) {
  set_has_quantity();
  quantity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Report.Datum.quantity)
}
::std::string* Report_Datum::mutable_quantity() {
  set_has_quantity();
  // @@protoc_insertion_point(field_mutable:Report.Datum.quantity)
  return quantity_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Report_Datum::release_quantity() {
  // @@protoc_insertion_point(field_release:Report.Datum.quantity)
  clear_has_quantity();
  return quantity_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Report_Datum::set_allocated_quantity(::std::string* quantity) {
  if (quantity != NULL) {
    set_has_quantity();
  } else {
    clear_has_quantity();
  }
  quantity_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), quantity);
  // @@protoc_insertion_point(field_set_allocated:Report.Datum.quantity)
}

// optional .Scalar value = 2;
bool Report_Datum::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Report_Datum::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
void Report_Datum::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void Report_Datum::clear_value() {
  if (value_ != NULL) value_->::Scalar::Clear();
  clear_has_value();
}
const ::Scalar& Report_Datum::value() const {
  // @@protoc_insertion_point(field_get:Report.Datum.value)
  return value_ != NULL ? *value_
                         : *::Scalar::internal_default_instance();
}
::Scalar* Report_Datum::mutable_value() {
  set_has_value();
  if (value_ == NULL) {
    value_ = new ::Scalar;
  }
  // @@protoc_insertion_point(field_mutable:Report.Datum.value)
  return value_;
}
::Scalar* Report_Datum::release_value() {
  // @@protoc_insertion_point(field_release:Report.Datum.value)
  clear_has_value();
  ::Scalar* temp = value_;
  value_ = NULL;
  return temp;
}
void Report_Datum::set_allocated_value(::Scalar* value) {
  delete value_;
  value_ = value;
  if (value) {
    set_has_value();
  } else {
    clear_has_value();
  }
  // @@protoc_insertion_point(field_set_allocated:Report.Datum.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Report::kAppFieldNumber;
const int Report::kTimeFieldNumber;
const int Report::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Report::Report()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_report_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Report)
}
Report::Report(const Report& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  app_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_app()) {
    app_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.app_);
  }
  time_ = from.time_;
  // @@protoc_insertion_point(copy_constructor:Report)
}

void Report::SharedCtor() {
  _cached_size_ = 0;
  app_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_ = 0;
}

Report::~Report() {
  // @@protoc_insertion_point(destructor:Report)
  SharedDtor();
}

void Report::SharedDtor() {
  app_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Report::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Report::descriptor() {
  protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Report& Report::default_instance() {
  protobuf_report_2eproto::InitDefaults();
  return *internal_default_instance();
}

Report* Report::New(::google::protobuf::Arena* arena) const {
  Report* n = new Report;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Report::Clear() {
// @@protoc_insertion_point(message_clear_start:Report)
  data_.Clear();
  if (has_app()) {
    GOOGLE_DCHECK(!app_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*app_.UnsafeRawStringPointer())->clear();
  }
  time_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Report::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Report)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string app = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_app()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->app().data(), this->app().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Report.app");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {
          set_has_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Report.Datum data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_data()));
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
  // @@protoc_insertion_point(parse_success:Report)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Report)
  return false;
#undef DO_
}

void Report::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string app = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->app().data(), this->app().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Report.app");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->app(), output);
  }

  // optional double time = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->time(), output);
  }

  // repeated .Report.Datum data = 3;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->data(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Report)
}

::google::protobuf::uint8* Report::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string app = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->app().data(), this->app().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Report.app");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->app(), target);
  }

  // optional double time = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->time(), target);
  }

  // repeated .Report.Datum data = 3;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->data(i), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Report)
  return target;
}

size_t Report::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Report)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .Report.Datum data = 3;
  {
    unsigned int count = this->data_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data(i));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional string app = 1;
    if (has_app()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->app());
    }

    // optional double time = 2;
    if (has_time()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Report::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Report)
  GOOGLE_DCHECK_NE(&from, this);
  const Report* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Report>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Report)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Report)
    MergeFrom(*source);
  }
}

void Report::MergeFrom(const Report& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Report)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_app();
      app_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.app_);
    }
    if (cached_has_bits & 0x00000002u) {
      time_ = from.time_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Report::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Report::CopyFrom(const Report& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Report::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->data())) return false;
  return true;
}

void Report::Swap(Report* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Report::InternalSwap(Report* other) {
  data_.InternalSwap(&other->data_);
  app_.Swap(&other->app_);
  std::swap(time_, other->time_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Report::GetMetadata() const {
  protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Report

// optional string app = 1;
bool Report::has_app() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Report::set_has_app() {
  _has_bits_[0] |= 0x00000001u;
}
void Report::clear_has_app() {
  _has_bits_[0] &= ~0x00000001u;
}
void Report::clear_app() {
  app_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_app();
}
const ::std::string& Report::app() const {
  // @@protoc_insertion_point(field_get:Report.app)
  return app_.GetNoArena();
}
void Report::set_app(const ::std::string& value) {
  set_has_app();
  app_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Report.app)
}
#if LANG_CXX11
void Report::set_app(::std::string&& value) {
  set_has_app();
  app_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Report.app)
}
#endif
void Report::set_app(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_app();
  app_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Report.app)
}
void Report::set_app(const char* value, size_t size) {
  set_has_app();
  app_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Report.app)
}
::std::string* Report::mutable_app() {
  set_has_app();
  // @@protoc_insertion_point(field_mutable:Report.app)
  return app_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Report::release_app() {
  // @@protoc_insertion_point(field_release:Report.app)
  clear_has_app();
  return app_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Report::set_allocated_app(::std::string* app) {
  if (app != NULL) {
    set_has_app();
  } else {
    clear_has_app();
  }
  app_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), app);
  // @@protoc_insertion_point(field_set_allocated:Report.app)
}

// optional double time = 2;
bool Report::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Report::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
void Report::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
void Report::clear_time() {
  time_ = 0;
  clear_has_time();
}
double Report::time() const {
  // @@protoc_insertion_point(field_get:Report.time)
  return time_;
}
void Report::set_time(double value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:Report.time)
}

// repeated .Report.Datum data = 3;
int Report::data_size() const {
  return data_.size();
}
void Report::clear_data() {
  data_.Clear();
}
const ::Report_Datum& Report::data(int index) const {
  // @@protoc_insertion_point(field_get:Report.data)
  return data_.Get(index);
}
::Report_Datum* Report::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:Report.data)
  return data_.Mutable(index);
}
::Report_Datum* Report::add_data() {
  // @@protoc_insertion_point(field_add:Report.data)
  return data_.Add();
}
::google::protobuf::RepeatedPtrField< ::Report_Datum >*
Report::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:Report.data)
  return &data_;
}
const ::google::protobuf::RepeatedPtrField< ::Report_Datum >&
Report::data() const {
  // @@protoc_insertion_point(field_list:Report.data)
  return data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)