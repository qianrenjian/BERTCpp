// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#include "model.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_model_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Model_Paramter_model_2eproto;
class Model_ParamterDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Model_Paramter> _instance;
} _Model_Paramter_default_instance_;
class ModelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Model> _instance;
} _Model_default_instance_;
static void InitDefaultsscc_info_Model_model_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Model_default_instance_;
    new (ptr) ::Model();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Model::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Model_model_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Model_model_2eproto}, {
      &scc_info_Model_Paramter_model_2eproto.base,}};

static void InitDefaultsscc_info_Model_Paramter_model_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Model_Paramter_default_instance_;
    new (ptr) ::Model_Paramter();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Model_Paramter::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Model_Paramter_model_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Model_Paramter_model_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_model_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_model_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_model_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_model_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, name_),
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, dtype_),
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, n_dim_),
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, scale_),
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, zero_point_),
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, dim_),
  PROTOBUF_FIELD_OFFSET(::Model_Paramter, data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Model, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Model, param_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Model_Paramter)},
  { 12, -1, sizeof(::Model)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Model_Paramter_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Model_default_instance_),
};

const char descriptor_table_protodef_model_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013model.proto\"\235\001\n\005Model\022\036\n\005param\030\001 \003(\0132\017"
  ".Model.Paramter\032t\n\010Paramter\022\014\n\004name\030\001 \001("
  "\t\022\r\n\005dtype\030\002 \001(\005\022\r\n\005n_dim\030\003 \001(\005\022\r\n\005scale"
  "\030\004 \001(\002\022\022\n\nzero_point\030\005 \001(\002\022\013\n\003dim\030\006 \003(\005\022"
  "\014\n\004data\030\007 \003(\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_model_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_model_2eproto_sccs[2] = {
  &scc_info_Model_model_2eproto.base,
  &scc_info_Model_Paramter_model_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_model_2eproto_once;
static bool descriptor_table_model_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_2eproto = {
  &descriptor_table_model_2eproto_initialized, descriptor_table_protodef_model_2eproto, "model.proto", 181,
  &descriptor_table_model_2eproto_once, descriptor_table_model_2eproto_sccs, descriptor_table_model_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_model_2eproto::offsets,
  file_level_metadata_model_2eproto, 2, file_level_enum_descriptors_model_2eproto, file_level_service_descriptors_model_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_model_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_model_2eproto)), true);

// ===================================================================

void Model_Paramter::InitAsDefaultInstance() {
}
class Model_Paramter::_Internal {
 public:
};

Model_Paramter::Model_Paramter()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Model.Paramter)
}
Model_Paramter::Model_Paramter(const Model_Paramter& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      dim_(from.dim_),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&dtype_, &from.dtype_,
    static_cast<size_t>(reinterpret_cast<char*>(&zero_point_) -
    reinterpret_cast<char*>(&dtype_)) + sizeof(zero_point_));
  // @@protoc_insertion_point(copy_constructor:Model.Paramter)
}

void Model_Paramter::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Model_Paramter_model_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&dtype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&zero_point_) -
      reinterpret_cast<char*>(&dtype_)) + sizeof(zero_point_));
}

Model_Paramter::~Model_Paramter() {
  // @@protoc_insertion_point(destructor:Model.Paramter)
  SharedDtor();
}

void Model_Paramter::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Model_Paramter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Model_Paramter& Model_Paramter::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Model_Paramter_model_2eproto.base);
  return *internal_default_instance();
}


void Model_Paramter::Clear() {
// @@protoc_insertion_point(message_clear_start:Model.Paramter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  dim_.Clear();
  data_.Clear();
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&dtype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&zero_point_) -
      reinterpret_cast<char*>(&dtype_)) + sizeof(zero_point_));
  _internal_metadata_.Clear();
}

const char* Model_Paramter::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Model.Paramter.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 dtype = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          dtype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 n_dim = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          n_dim_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float scale = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          scale_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float zero_point = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          zero_point_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated int32 dim = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_dim(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48) {
          _internal_add_dim(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float data = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_data(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61) {
          _internal_add_data(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Model_Paramter::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Model.Paramter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Model.Paramter.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // int32 dtype = 2;
  if (this->dtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_dtype(), target);
  }

  // int32 n_dim = 3;
  if (this->n_dim() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_n_dim(), target);
  }

  // float scale = 4;
  if (!(this->scale() <= 0 && this->scale() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_scale(), target);
  }

  // float zero_point = 5;
  if (!(this->zero_point() <= 0 && this->zero_point() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_zero_point(), target);
  }

  // repeated int32 dim = 6;
  {
    int byte_size = _dim_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          6, _internal_dim(), byte_size, target);
    }
  }

  // repeated float data = 7;
  if (this->_internal_data_size() > 0) {
    target = stream->WriteFixedPacked(7, _internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Model.Paramter)
  return target;
}

size_t Model_Paramter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Model.Paramter)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 dim = 6;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->dim_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _dim_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float data = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_data_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _data_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // int32 dtype = 2;
  if (this->dtype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_dtype());
  }

  // int32 n_dim = 3;
  if (this->n_dim() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_n_dim());
  }

  // float scale = 4;
  if (!(this->scale() <= 0 && this->scale() >= 0)) {
    total_size += 1 + 4;
  }

  // float zero_point = 5;
  if (!(this->zero_point() <= 0 && this->zero_point() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Model_Paramter::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Model.Paramter)
  GOOGLE_DCHECK_NE(&from, this);
  const Model_Paramter* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Model_Paramter>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Model.Paramter)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Model.Paramter)
    MergeFrom(*source);
  }
}

void Model_Paramter::MergeFrom(const Model_Paramter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Model.Paramter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  dim_.MergeFrom(from.dim_);
  data_.MergeFrom(from.data_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.dtype() != 0) {
    _internal_set_dtype(from._internal_dtype());
  }
  if (from.n_dim() != 0) {
    _internal_set_n_dim(from._internal_n_dim());
  }
  if (!(from.scale() <= 0 && from.scale() >= 0)) {
    _internal_set_scale(from._internal_scale());
  }
  if (!(from.zero_point() <= 0 && from.zero_point() >= 0)) {
    _internal_set_zero_point(from._internal_zero_point());
  }
}

void Model_Paramter::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Model.Paramter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Model_Paramter::CopyFrom(const Model_Paramter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Model.Paramter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Model_Paramter::IsInitialized() const {
  return true;
}

void Model_Paramter::InternalSwap(Model_Paramter* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  dim_.InternalSwap(&other->dim_);
  data_.InternalSwap(&other->data_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(dtype_, other->dtype_);
  swap(n_dim_, other->n_dim_);
  swap(scale_, other->scale_);
  swap(zero_point_, other->zero_point_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Model_Paramter::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Model::InitAsDefaultInstance() {
}
class Model::_Internal {
 public:
};

Model::Model()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Model)
}
Model::Model(const Model& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      param_(from.param_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Model)
}

void Model::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Model_model_2eproto.base);
}

Model::~Model() {
  // @@protoc_insertion_point(destructor:Model)
  SharedDtor();
}

void Model::SharedDtor() {
}

void Model::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Model& Model::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Model_model_2eproto.base);
  return *internal_default_instance();
}


void Model::Clear() {
// @@protoc_insertion_point(message_clear_start:Model)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  param_.Clear();
  _internal_metadata_.Clear();
}

const char* Model::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .Model.Paramter param = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_param(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Model::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Model)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Model.Paramter param = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_param_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_param(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Model)
  return target;
}

size_t Model::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Model)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Model.Paramter param = 1;
  total_size += 1UL * this->_internal_param_size();
  for (const auto& msg : this->param_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Model::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Model)
  GOOGLE_DCHECK_NE(&from, this);
  const Model* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Model>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Model)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Model)
    MergeFrom(*source);
  }
}

void Model::MergeFrom(const Model& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Model)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  param_.MergeFrom(from.param_);
}

void Model::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Model)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Model::CopyFrom(const Model& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Model)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Model::IsInitialized() const {
  return true;
}

void Model::InternalSwap(Model* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  param_.InternalSwap(&other->param_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Model::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Model_Paramter* Arena::CreateMaybeMessage< ::Model_Paramter >(Arena* arena) {
  return Arena::CreateInternal< ::Model_Paramter >(arena);
}
template<> PROTOBUF_NOINLINE ::Model* Arena::CreateMaybeMessage< ::Model >(Arena* arena) {
  return Arena::CreateInternal< ::Model >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
