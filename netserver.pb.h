// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: netserver.proto

#ifndef PROTOBUF_netserver_2eproto__INCLUDED
#define PROTOBUF_netserver_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace netserver {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_netserver_2eproto();
void protobuf_AssignDesc_netserver_2eproto();
void protobuf_ShutdownFile_netserver_2eproto();

class GetUserNameRequest;
class GetUserNameResponse;
class SetUserNameRequest;

// ===================================================================

class GetUserNameRequest : public ::google::protobuf::Message {
 public:
  GetUserNameRequest();
  virtual ~GetUserNameRequest();
  
  GetUserNameRequest(const GetUserNameRequest& from);
  
  inline GetUserNameRequest& operator=(const GetUserNameRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetUserNameRequest& default_instance();
  
  void Swap(GetUserNameRequest* other);
  
  // implements Message ----------------------------------------------
  
  GetUserNameRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetUserNameRequest& from);
  void MergeFrom(const GetUserNameRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 userId = 1;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUserIdFieldNumber = 1;
  inline ::google::protobuf::int32 userid() const;
  inline void set_userid(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:netserver.GetUserNameRequest)
 private:
  inline void set_has_userid();
  inline void clear_has_userid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 userid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_netserver_2eproto();
  friend void protobuf_AssignDesc_netserver_2eproto();
  friend void protobuf_ShutdownFile_netserver_2eproto();
  
  void InitAsDefaultInstance();
  static GetUserNameRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetUserNameResponse : public ::google::protobuf::Message {
 public:
  GetUserNameResponse();
  virtual ~GetUserNameResponse();
  
  GetUserNameResponse(const GetUserNameResponse& from);
  
  inline GetUserNameResponse& operator=(const GetUserNameResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetUserNameResponse& default_instance();
  
  void Swap(GetUserNameResponse* other);
  
  // implements Message ----------------------------------------------
  
  GetUserNameResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetUserNameResponse& from);
  void MergeFrom(const GetUserNameResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 gender = 1;
  inline bool has_gender() const;
  inline void clear_gender();
  static const int kGenderFieldNumber = 1;
  inline ::google::protobuf::int32 gender() const;
  inline void set_gender(::google::protobuf::int32 value);
  
  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional string province = 3;
  inline bool has_province() const;
  inline void clear_province();
  static const int kProvinceFieldNumber = 3;
  inline const ::std::string& province() const;
  inline void set_province(const ::std::string& value);
  inline void set_province(const char* value);
  inline void set_province(const char* value, size_t size);
  inline ::std::string* mutable_province();
  inline ::std::string* release_province();
  
  // @@protoc_insertion_point(class_scope:netserver.GetUserNameResponse)
 private:
  inline void set_has_gender();
  inline void clear_has_gender();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_province();
  inline void clear_has_province();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* province_;
  ::google::protobuf::int32 gender_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_netserver_2eproto();
  friend void protobuf_AssignDesc_netserver_2eproto();
  friend void protobuf_ShutdownFile_netserver_2eproto();
  
  void InitAsDefaultInstance();
  static GetUserNameResponse* default_instance_;
};
// -------------------------------------------------------------------

class SetUserNameRequest : public ::google::protobuf::Message {
 public:
  SetUserNameRequest();
  virtual ~SetUserNameRequest();
  
  SetUserNameRequest(const SetUserNameRequest& from);
  
  inline SetUserNameRequest& operator=(const SetUserNameRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetUserNameRequest& default_instance();
  
  void Swap(SetUserNameRequest* other);
  
  // implements Message ----------------------------------------------
  
  SetUserNameRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetUserNameRequest& from);
  void MergeFrom(const SetUserNameRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 gender = 1;
  inline bool has_gender() const;
  inline void clear_gender();
  static const int kGenderFieldNumber = 1;
  inline ::google::protobuf::int32 gender() const;
  inline void set_gender(::google::protobuf::int32 value);
  
  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional string province = 3;
  inline bool has_province() const;
  inline void clear_province();
  static const int kProvinceFieldNumber = 3;
  inline const ::std::string& province() const;
  inline void set_province(const ::std::string& value);
  inline void set_province(const char* value);
  inline void set_province(const char* value, size_t size);
  inline ::std::string* mutable_province();
  inline ::std::string* release_province();
  
  // @@protoc_insertion_point(class_scope:netserver.SetUserNameRequest)
 private:
  inline void set_has_gender();
  inline void clear_has_gender();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_province();
  inline void clear_has_province();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* province_;
  ::google::protobuf::int32 gender_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_netserver_2eproto();
  friend void protobuf_AssignDesc_netserver_2eproto();
  friend void protobuf_ShutdownFile_netserver_2eproto();
  
  void InitAsDefaultInstance();
  static SetUserNameRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// GetUserNameRequest

// required int32 userId = 1;
inline bool GetUserNameRequest::has_userid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetUserNameRequest::set_has_userid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetUserNameRequest::clear_has_userid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetUserNameRequest::clear_userid() {
  userid_ = 0;
  clear_has_userid();
}
inline ::google::protobuf::int32 GetUserNameRequest::userid() const {
  return userid_;
}
inline void GetUserNameRequest::set_userid(::google::protobuf::int32 value) {
  set_has_userid();
  userid_ = value;
}

// -------------------------------------------------------------------

// GetUserNameResponse

// required int32 gender = 1;
inline bool GetUserNameResponse::has_gender() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetUserNameResponse::set_has_gender() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetUserNameResponse::clear_has_gender() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetUserNameResponse::clear_gender() {
  gender_ = 0;
  clear_has_gender();
}
inline ::google::protobuf::int32 GetUserNameResponse::gender() const {
  return gender_;
}
inline void GetUserNameResponse::set_gender(::google::protobuf::int32 value) {
  set_has_gender();
  gender_ = value;
}

// required string name = 2;
inline bool GetUserNameResponse::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetUserNameResponse::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetUserNameResponse::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetUserNameResponse::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& GetUserNameResponse::name() const {
  return *name_;
}
inline void GetUserNameResponse::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void GetUserNameResponse::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void GetUserNameResponse::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetUserNameResponse::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* GetUserNameResponse::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string province = 3;
inline bool GetUserNameResponse::has_province() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetUserNameResponse::set_has_province() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetUserNameResponse::clear_has_province() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetUserNameResponse::clear_province() {
  if (province_ != &::google::protobuf::internal::kEmptyString) {
    province_->clear();
  }
  clear_has_province();
}
inline const ::std::string& GetUserNameResponse::province() const {
  return *province_;
}
inline void GetUserNameResponse::set_province(const ::std::string& value) {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  province_->assign(value);
}
inline void GetUserNameResponse::set_province(const char* value) {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  province_->assign(value);
}
inline void GetUserNameResponse::set_province(const char* value, size_t size) {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  province_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetUserNameResponse::mutable_province() {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  return province_;
}
inline ::std::string* GetUserNameResponse::release_province() {
  clear_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = province_;
    province_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// SetUserNameRequest

// required int32 gender = 1;
inline bool SetUserNameRequest::has_gender() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SetUserNameRequest::set_has_gender() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SetUserNameRequest::clear_has_gender() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SetUserNameRequest::clear_gender() {
  gender_ = 0;
  clear_has_gender();
}
inline ::google::protobuf::int32 SetUserNameRequest::gender() const {
  return gender_;
}
inline void SetUserNameRequest::set_gender(::google::protobuf::int32 value) {
  set_has_gender();
  gender_ = value;
}

// required string name = 2;
inline bool SetUserNameRequest::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SetUserNameRequest::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SetUserNameRequest::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SetUserNameRequest::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& SetUserNameRequest::name() const {
  return *name_;
}
inline void SetUserNameRequest::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SetUserNameRequest::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SetUserNameRequest::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SetUserNameRequest::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* SetUserNameRequest::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string province = 3;
inline bool SetUserNameRequest::has_province() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SetUserNameRequest::set_has_province() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SetUserNameRequest::clear_has_province() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SetUserNameRequest::clear_province() {
  if (province_ != &::google::protobuf::internal::kEmptyString) {
    province_->clear();
  }
  clear_has_province();
}
inline const ::std::string& SetUserNameRequest::province() const {
  return *province_;
}
inline void SetUserNameRequest::set_province(const ::std::string& value) {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  province_->assign(value);
}
inline void SetUserNameRequest::set_province(const char* value) {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  province_->assign(value);
}
inline void SetUserNameRequest::set_province(const char* value, size_t size) {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  province_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SetUserNameRequest::mutable_province() {
  set_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    province_ = new ::std::string;
  }
  return province_;
}
inline ::std::string* SetUserNameRequest::release_province() {
  clear_has_province();
  if (province_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = province_;
    province_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace netserver

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_netserver_2eproto__INCLUDED
