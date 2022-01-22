// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scan_contexts.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_scan_5fcontexts_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_scan_5fcontexts_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_scan_5fcontexts_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_scan_5fcontexts_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_scan_5fcontexts_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_scan_5fcontexts_2eproto_metadata_getter(int index);
namespace scan_context_io {
class ScanContext;
struct ScanContextDefaultTypeInternal;
extern ScanContextDefaultTypeInternal _ScanContext_default_instance_;
class ScanContexts;
struct ScanContextsDefaultTypeInternal;
extern ScanContextsDefaultTypeInternal _ScanContexts_default_instance_;
}  // namespace scan_context_io
PROTOBUF_NAMESPACE_OPEN
template<> ::scan_context_io::ScanContext* Arena::CreateMaybeMessage<::scan_context_io::ScanContext>(Arena*);
template<> ::scan_context_io::ScanContexts* Arena::CreateMaybeMessage<::scan_context_io::ScanContexts>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace scan_context_io {

// ===================================================================

class ScanContext PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.ScanContext) */ {
 public:
  inline ScanContext() : ScanContext(nullptr) {}
  virtual ~ScanContext();
  explicit constexpr ScanContext(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ScanContext(const ScanContext& from);
  ScanContext(ScanContext&& from) noexcept
    : ScanContext() {
    *this = ::std::move(from);
  }

  inline ScanContext& operator=(const ScanContext& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScanContext& operator=(ScanContext&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ScanContext& default_instance() {
    return *internal_default_instance();
  }
  static inline const ScanContext* internal_default_instance() {
    return reinterpret_cast<const ScanContext*>(
               &_ScanContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ScanContext& a, ScanContext& b) {
    a.Swap(&b);
  }
  inline void Swap(ScanContext* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ScanContext* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ScanContext* New() const final {
    return CreateMaybeMessage<ScanContext>(nullptr);
  }

  ScanContext* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ScanContext>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ScanContext& from);
  void MergeFrom(const ScanContext& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ScanContext* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.ScanContext";
  }
  protected:
  explicit ScanContext(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_scan_5fcontexts_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // repeated float data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  private:
  float _internal_data(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_data() const;
  void _internal_add_data(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_data();
  public:
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:scan_context_io.ScanContext)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_scan_5fcontexts_2eproto;
};
// -------------------------------------------------------------------

class ScanContexts PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.ScanContexts) */ {
 public:
  inline ScanContexts() : ScanContexts(nullptr) {}
  virtual ~ScanContexts();
  explicit constexpr ScanContexts(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ScanContexts(const ScanContexts& from);
  ScanContexts(ScanContexts&& from) noexcept
    : ScanContexts() {
    *this = ::std::move(from);
  }

  inline ScanContexts& operator=(const ScanContexts& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScanContexts& operator=(ScanContexts&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ScanContexts& default_instance() {
    return *internal_default_instance();
  }
  static inline const ScanContexts* internal_default_instance() {
    return reinterpret_cast<const ScanContexts*>(
               &_ScanContexts_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ScanContexts& a, ScanContexts& b) {
    a.Swap(&b);
  }
  inline void Swap(ScanContexts* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ScanContexts* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ScanContexts* New() const final {
    return CreateMaybeMessage<ScanContexts>(nullptr);
  }

  ScanContexts* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ScanContexts>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ScanContexts& from);
  void MergeFrom(const ScanContexts& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ScanContexts* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.ScanContexts";
  }
  protected:
  explicit ScanContexts(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_scan_5fcontexts_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 3,
    kNumRingsFieldNumber = 1,
    kNumSectorsFieldNumber = 2,
  };
  // repeated .scan_context_io.ScanContext data = 3;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  ::scan_context_io::ScanContext* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::ScanContext >*
      mutable_data();
  private:
  const ::scan_context_io::ScanContext& _internal_data(int index) const;
  ::scan_context_io::ScanContext* _internal_add_data();
  public:
  const ::scan_context_io::ScanContext& data(int index) const;
  ::scan_context_io::ScanContext* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::ScanContext >&
      data() const;

  // required int32 num_rings = 1;
  bool has_num_rings() const;
  private:
  bool _internal_has_num_rings() const;
  public:
  void clear_num_rings();
  ::PROTOBUF_NAMESPACE_ID::int32 num_rings() const;
  void set_num_rings(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num_rings() const;
  void _internal_set_num_rings(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 num_sectors = 2;
  bool has_num_sectors() const;
  private:
  bool _internal_has_num_sectors() const;
  public:
  void clear_num_sectors();
  ::PROTOBUF_NAMESPACE_ID::int32 num_sectors() const;
  void set_num_sectors(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num_sectors() const;
  void _internal_set_num_sectors(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:scan_context_io.ScanContexts)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::ScanContext > data_;
  ::PROTOBUF_NAMESPACE_ID::int32 num_rings_;
  ::PROTOBUF_NAMESPACE_ID::int32 num_sectors_;
  friend struct ::TableStruct_scan_5fcontexts_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScanContext

// repeated float data = 1;
inline int ScanContext::_internal_data_size() const {
  return data_.size();
}
inline int ScanContext::data_size() const {
  return _internal_data_size();
}
inline void ScanContext::clear_data() {
  data_.Clear();
}
inline float ScanContext::_internal_data(int index) const {
  return data_.Get(index);
}
inline float ScanContext::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContext.data)
  return _internal_data(index);
}
inline void ScanContext::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:scan_context_io.ScanContext.data)
}
inline void ScanContext::_internal_add_data(float value) {
  data_.Add(value);
}
inline void ScanContext::add_data(float value) {
  _internal_add_data(value);
  // @@protoc_insertion_point(field_add:scan_context_io.ScanContext.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
ScanContext::_internal_data() const {
  return data_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
ScanContext::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.ScanContext.data)
  return _internal_data();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
ScanContext::_internal_mutable_data() {
  return &data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
ScanContext::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.ScanContext.data)
  return _internal_mutable_data();
}

// -------------------------------------------------------------------

// ScanContexts

// required int32 num_rings = 1;
inline bool ScanContexts::_internal_has_num_rings() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ScanContexts::has_num_rings() const {
  return _internal_has_num_rings();
}
inline void ScanContexts::clear_num_rings() {
  num_rings_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ScanContexts::_internal_num_rings() const {
  return num_rings_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ScanContexts::num_rings() const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContexts.num_rings)
  return _internal_num_rings();
}
inline void ScanContexts::_internal_set_num_rings(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  num_rings_ = value;
}
inline void ScanContexts::set_num_rings(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num_rings(value);
  // @@protoc_insertion_point(field_set:scan_context_io.ScanContexts.num_rings)
}

// required int32 num_sectors = 2;
inline bool ScanContexts::_internal_has_num_sectors() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ScanContexts::has_num_sectors() const {
  return _internal_has_num_sectors();
}
inline void ScanContexts::clear_num_sectors() {
  num_sectors_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ScanContexts::_internal_num_sectors() const {
  return num_sectors_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ScanContexts::num_sectors() const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContexts.num_sectors)
  return _internal_num_sectors();
}
inline void ScanContexts::_internal_set_num_sectors(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  num_sectors_ = value;
}
inline void ScanContexts::set_num_sectors(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num_sectors(value);
  // @@protoc_insertion_point(field_set:scan_context_io.ScanContexts.num_sectors)
}

// repeated .scan_context_io.ScanContext data = 3;
inline int ScanContexts::_internal_data_size() const {
  return data_.size();
}
inline int ScanContexts::data_size() const {
  return _internal_data_size();
}
inline void ScanContexts::clear_data() {
  data_.Clear();
}
inline ::scan_context_io::ScanContext* ScanContexts::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:scan_context_io.ScanContexts.data)
  return data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::ScanContext >*
ScanContexts::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.ScanContexts.data)
  return &data_;
}
inline const ::scan_context_io::ScanContext& ScanContexts::_internal_data(int index) const {
  return data_.Get(index);
}
inline const ::scan_context_io::ScanContext& ScanContexts::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContexts.data)
  return _internal_data(index);
}
inline ::scan_context_io::ScanContext* ScanContexts::_internal_add_data() {
  return data_.Add();
}
inline ::scan_context_io::ScanContext* ScanContexts::add_data() {
  // @@protoc_insertion_point(field_add:scan_context_io.ScanContexts.data)
  return _internal_add_data();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::ScanContext >&
ScanContexts::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.ScanContexts.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace scan_context_io

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_scan_5fcontexts_2eproto
