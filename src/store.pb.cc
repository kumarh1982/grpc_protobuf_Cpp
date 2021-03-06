// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: store.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "store.pb.h"

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

namespace store {

namespace {

const ::google::protobuf::Descriptor* ProductQuery_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProductQuery_reflection_ = NULL;
const ::google::protobuf::Descriptor* ProductReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProductReply_reflection_ = NULL;
const ::google::protobuf::Descriptor* ProductInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProductInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_store_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_store_2eproto() {
  protobuf_AddDesc_store_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "store.proto");
  GOOGLE_CHECK(file != NULL);
  ProductQuery_descriptor_ = file->message_type(0);
  static const int ProductQuery_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductQuery, product_name_),
  };
  ProductQuery_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProductQuery_descriptor_,
      ProductQuery::default_instance_,
      ProductQuery_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProductQuery),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductQuery, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductQuery, _is_default_instance_));
  ProductReply_descriptor_ = file->message_type(1);
  static const int ProductReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductReply, products_),
  };
  ProductReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProductReply_descriptor_,
      ProductReply::default_instance_,
      ProductReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProductReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductReply, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductReply, _is_default_instance_));
  ProductInfo_descriptor_ = file->message_type(2);
  static const int ProductInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductInfo, price_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductInfo, vendor_id_),
  };
  ProductInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProductInfo_descriptor_,
      ProductInfo::default_instance_,
      ProductInfo_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProductInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductInfo, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductInfo, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_store_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProductQuery_descriptor_, &ProductQuery::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProductReply_descriptor_, &ProductReply::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProductInfo_descriptor_, &ProductInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_store_2eproto() {
  delete ProductQuery::default_instance_;
  delete ProductQuery_reflection_;
  delete ProductReply::default_instance_;
  delete ProductReply_reflection_;
  delete ProductInfo::default_instance_;
  delete ProductInfo_reflection_;
}

void protobuf_AddDesc_store_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_store_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013store.proto\022\005store\"$\n\014ProductQuery\022\024\n\014"
    "product_name\030\001 \001(\t\"4\n\014ProductReply\022$\n\010pr"
    "oducts\030\001 \003(\0132\022.store.ProductInfo\"/\n\013Prod"
    "uctInfo\022\r\n\005price\030\001 \001(\001\022\021\n\tvendor_id\030\002 \001("
    "\t2B\n\005Store\0229\n\013getProducts\022\023.store.Produc"
    "tQuery\032\023.store.ProductReply\"\000b\006proto3", 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "store.proto", &protobuf_RegisterTypes);
  ProductQuery::default_instance_ = new ProductQuery();
  ProductReply::default_instance_ = new ProductReply();
  ProductInfo::default_instance_ = new ProductInfo();
  ProductQuery::default_instance_->InitAsDefaultInstance();
  ProductReply::default_instance_->InitAsDefaultInstance();
  ProductInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_store_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_store_2eproto {
  StaticDescriptorInitializer_store_2eproto() {
    protobuf_AddDesc_store_2eproto();
  }
} static_descriptor_initializer_store_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductQuery::kProductNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductQuery::ProductQuery()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:store.ProductQuery)
}

void ProductQuery::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProductQuery::ProductQuery(const ProductQuery& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:store.ProductQuery)
}

void ProductQuery::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  product_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ProductQuery::~ProductQuery() {
  // @@protoc_insertion_point(destructor:store.ProductQuery)
  SharedDtor();
}

void ProductQuery::SharedDtor() {
  product_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ProductQuery::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProductQuery::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProductQuery_descriptor_;
}

const ProductQuery& ProductQuery::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_2eproto();
  return *default_instance_;
}

ProductQuery* ProductQuery::default_instance_ = NULL;

ProductQuery* ProductQuery::New(::google::protobuf::Arena* arena) const {
  ProductQuery* n = new ProductQuery;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProductQuery::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductQuery)
  product_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ProductQuery::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store.ProductQuery)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string product_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_product_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->product_name().data(), this->product_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "store.ProductQuery.product_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store.ProductQuery)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store.ProductQuery)
  return false;
#undef DO_
}

void ProductQuery::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store.ProductQuery)
  // optional string product_name = 1;
  if (this->product_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_name().data(), this->product_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductQuery.product_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->product_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:store.ProductQuery)
}

::google::protobuf::uint8* ProductQuery::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductQuery)
  // optional string product_name = 1;
  if (this->product_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_name().data(), this->product_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductQuery.product_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->product_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:store.ProductQuery)
  return target;
}

int ProductQuery::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductQuery)
  int total_size = 0;

  // optional string product_name = 1;
  if (this->product_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->product_name());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProductQuery::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:store.ProductQuery)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ProductQuery* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductQuery>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:store.ProductQuery)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:store.ProductQuery)
    MergeFrom(*source);
  }
}

void ProductQuery::MergeFrom(const ProductQuery& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductQuery)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.product_name().size() > 0) {

    product_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.product_name_);
  }
}

void ProductQuery::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:store.ProductQuery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductQuery::CopyFrom(const ProductQuery& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductQuery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductQuery::IsInitialized() const {

  return true;
}

void ProductQuery::Swap(ProductQuery* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductQuery::InternalSwap(ProductQuery* other) {
  product_name_.Swap(&other->product_name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProductQuery::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProductQuery_descriptor_;
  metadata.reflection = ProductQuery_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProductQuery

// optional string product_name = 1;
void ProductQuery::clear_product_name() {
  product_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ProductQuery::product_name() const {
  // @@protoc_insertion_point(field_get:store.ProductQuery.product_name)
  return product_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ProductQuery::set_product_name(const ::std::string& value) {
  
  product_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:store.ProductQuery.product_name)
}
 void ProductQuery::set_product_name(const char* value) {
  
  product_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:store.ProductQuery.product_name)
}
 void ProductQuery::set_product_name(const char* value, size_t size) {
  
  product_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:store.ProductQuery.product_name)
}
 ::std::string* ProductQuery::mutable_product_name() {
  
  // @@protoc_insertion_point(field_mutable:store.ProductQuery.product_name)
  return product_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ProductQuery::release_product_name() {
  // @@protoc_insertion_point(field_release:store.ProductQuery.product_name)
  
  return product_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ProductQuery::set_allocated_product_name(::std::string* product_name) {
  if (product_name != NULL) {
    
  } else {
    
  }
  product_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), product_name);
  // @@protoc_insertion_point(field_set_allocated:store.ProductQuery.product_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductReply::kProductsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductReply::ProductReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:store.ProductReply)
}

void ProductReply::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProductReply::ProductReply(const ProductReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:store.ProductReply)
}

void ProductReply::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ProductReply::~ProductReply() {
  // @@protoc_insertion_point(destructor:store.ProductReply)
  SharedDtor();
}

void ProductReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProductReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProductReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProductReply_descriptor_;
}

const ProductReply& ProductReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_2eproto();
  return *default_instance_;
}

ProductReply* ProductReply::default_instance_ = NULL;

ProductReply* ProductReply::New(::google::protobuf::Arena* arena) const {
  ProductReply* n = new ProductReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProductReply::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductReply)
  products_.Clear();
}

bool ProductReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store.ProductReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .store.ProductInfo products = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_products:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_products()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_products;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store.ProductReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store.ProductReply)
  return false;
#undef DO_
}

void ProductReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store.ProductReply)
  // repeated .store.ProductInfo products = 1;
  for (unsigned int i = 0, n = this->products_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->products(i), output);
  }

  // @@protoc_insertion_point(serialize_end:store.ProductReply)
}

::google::protobuf::uint8* ProductReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductReply)
  // repeated .store.ProductInfo products = 1;
  for (unsigned int i = 0, n = this->products_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->products(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:store.ProductReply)
  return target;
}

int ProductReply::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductReply)
  int total_size = 0;

  // repeated .store.ProductInfo products = 1;
  total_size += 1 * this->products_size();
  for (int i = 0; i < this->products_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->products(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProductReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:store.ProductReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ProductReply* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:store.ProductReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:store.ProductReply)
    MergeFrom(*source);
  }
}

void ProductReply::MergeFrom(const ProductReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  products_.MergeFrom(from.products_);
}

void ProductReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:store.ProductReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductReply::CopyFrom(const ProductReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductReply::IsInitialized() const {

  return true;
}

void ProductReply::Swap(ProductReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductReply::InternalSwap(ProductReply* other) {
  products_.UnsafeArenaSwap(&other->products_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProductReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProductReply_descriptor_;
  metadata.reflection = ProductReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProductReply

// repeated .store.ProductInfo products = 1;
int ProductReply::products_size() const {
  return products_.size();
}
void ProductReply::clear_products() {
  products_.Clear();
}
const ::store::ProductInfo& ProductReply::products(int index) const {
  // @@protoc_insertion_point(field_get:store.ProductReply.products)
  return products_.Get(index);
}
::store::ProductInfo* ProductReply::mutable_products(int index) {
  // @@protoc_insertion_point(field_mutable:store.ProductReply.products)
  return products_.Mutable(index);
}
::store::ProductInfo* ProductReply::add_products() {
  // @@protoc_insertion_point(field_add:store.ProductReply.products)
  return products_.Add();
}
::google::protobuf::RepeatedPtrField< ::store::ProductInfo >*
ProductReply::mutable_products() {
  // @@protoc_insertion_point(field_mutable_list:store.ProductReply.products)
  return &products_;
}
const ::google::protobuf::RepeatedPtrField< ::store::ProductInfo >&
ProductReply::products() const {
  // @@protoc_insertion_point(field_list:store.ProductReply.products)
  return products_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductInfo::kPriceFieldNumber;
const int ProductInfo::kVendorIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductInfo::ProductInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:store.ProductInfo)
}

void ProductInfo::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProductInfo::ProductInfo(const ProductInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:store.ProductInfo)
}

void ProductInfo::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  price_ = 0;
  vendor_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ProductInfo::~ProductInfo() {
  // @@protoc_insertion_point(destructor:store.ProductInfo)
  SharedDtor();
}

void ProductInfo::SharedDtor() {
  vendor_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ProductInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProductInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProductInfo_descriptor_;
}

const ProductInfo& ProductInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_2eproto();
  return *default_instance_;
}

ProductInfo* ProductInfo::default_instance_ = NULL;

ProductInfo* ProductInfo::New(::google::protobuf::Arena* arena) const {
  ProductInfo* n = new ProductInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProductInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductInfo)
  price_ = 0;
  vendor_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ProductInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store.ProductInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double price = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &price_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_vendor_id;
        break;
      }

      // optional string vendor_id = 2;
      case 2: {
        if (tag == 18) {
         parse_vendor_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_vendor_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->vendor_id().data(), this->vendor_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "store.ProductInfo.vendor_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store.ProductInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store.ProductInfo)
  return false;
#undef DO_
}

void ProductInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store.ProductInfo)
  // optional double price = 1;
  if (this->price() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->price(), output);
  }

  // optional string vendor_id = 2;
  if (this->vendor_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->vendor_id().data(), this->vendor_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductInfo.vendor_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->vendor_id(), output);
  }

  // @@protoc_insertion_point(serialize_end:store.ProductInfo)
}

::google::protobuf::uint8* ProductInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductInfo)
  // optional double price = 1;
  if (this->price() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->price(), target);
  }

  // optional string vendor_id = 2;
  if (this->vendor_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->vendor_id().data(), this->vendor_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductInfo.vendor_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->vendor_id(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:store.ProductInfo)
  return target;
}

int ProductInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductInfo)
  int total_size = 0;

  // optional double price = 1;
  if (this->price() != 0) {
    total_size += 1 + 8;
  }

  // optional string vendor_id = 2;
  if (this->vendor_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->vendor_id());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProductInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:store.ProductInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ProductInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:store.ProductInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:store.ProductInfo)
    MergeFrom(*source);
  }
}

void ProductInfo::MergeFrom(const ProductInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.price() != 0) {
    set_price(from.price());
  }
  if (from.vendor_id().size() > 0) {

    vendor_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vendor_id_);
  }
}

void ProductInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:store.ProductInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductInfo::CopyFrom(const ProductInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductInfo::IsInitialized() const {

  return true;
}

void ProductInfo::Swap(ProductInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductInfo::InternalSwap(ProductInfo* other) {
  std::swap(price_, other->price_);
  vendor_id_.Swap(&other->vendor_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProductInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProductInfo_descriptor_;
  metadata.reflection = ProductInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProductInfo

// optional double price = 1;
void ProductInfo::clear_price() {
  price_ = 0;
}
 double ProductInfo::price() const {
  // @@protoc_insertion_point(field_get:store.ProductInfo.price)
  return price_;
}
 void ProductInfo::set_price(double value) {
  
  price_ = value;
  // @@protoc_insertion_point(field_set:store.ProductInfo.price)
}

// optional string vendor_id = 2;
void ProductInfo::clear_vendor_id() {
  vendor_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ProductInfo::vendor_id() const {
  // @@protoc_insertion_point(field_get:store.ProductInfo.vendor_id)
  return vendor_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ProductInfo::set_vendor_id(const ::std::string& value) {
  
  vendor_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:store.ProductInfo.vendor_id)
}
 void ProductInfo::set_vendor_id(const char* value) {
  
  vendor_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:store.ProductInfo.vendor_id)
}
 void ProductInfo::set_vendor_id(const char* value, size_t size) {
  
  vendor_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:store.ProductInfo.vendor_id)
}
 ::std::string* ProductInfo::mutable_vendor_id() {
  
  // @@protoc_insertion_point(field_mutable:store.ProductInfo.vendor_id)
  return vendor_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ProductInfo::release_vendor_id() {
  // @@protoc_insertion_point(field_release:store.ProductInfo.vendor_id)
  
  return vendor_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ProductInfo::set_allocated_vendor_id(::std::string* vendor_id) {
  if (vendor_id != NULL) {
    
  } else {
    
  }
  vendor_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vendor_id);
  // @@protoc_insertion_point(field_set_allocated:store.ProductInfo.vendor_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace store

// @@protoc_insertion_point(global_scope)
