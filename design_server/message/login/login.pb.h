// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/login.proto

#ifndef PROTOBUF_protobuf_2flogin_2eproto__INCLUDED
#define PROTOBUF_protobuf_2flogin_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace design {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_protobuf_2flogin_2eproto();
void protobuf_AssignDesc_protobuf_2flogin_2eproto();
void protobuf_ShutdownFile_protobuf_2flogin_2eproto();

class User;

// ===================================================================

class User : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:design.User) */ {
 public:
  User();
  virtual ~User();

  User(const User& from);

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const User& default_instance();

  void Swap(User* other);

  // implements Message ----------------------------------------------

  inline User* New() const { return New(NULL); }

  User* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(User* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required string pwd = 2;
  bool has_pwd() const;
  void clear_pwd();
  static const int kPwdFieldNumber = 2;
  const ::std::string& pwd() const;
  void set_pwd(const ::std::string& value);
  void set_pwd(const char* value);
  void set_pwd(const char* value, size_t size);
  ::std::string* mutable_pwd();
  ::std::string* release_pwd();
  void set_allocated_pwd(::std::string* pwd);

  // @@protoc_insertion_point(class_scope:design.User)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_pwd();
  inline void clear_has_pwd();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr pwd_;
  friend void  protobuf_AddDesc_protobuf_2flogin_2eproto();
  friend void protobuf_AssignDesc_protobuf_2flogin_2eproto();
  friend void protobuf_ShutdownFile_protobuf_2flogin_2eproto();

  void InitAsDefaultInstance();
  static User* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// User

// required string name = 1;
inline bool User::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void User::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void User::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void User::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& User::name() const {
  // @@protoc_insertion_point(field_get:design.User.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void User::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:design.User.name)
}
inline void User::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:design.User.name)
}
inline void User::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:design.User.name)
}
inline ::std::string* User::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:design.User.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* User::release_name() {
  // @@protoc_insertion_point(field_release:design.User.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void User::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:design.User.name)
}

// required string pwd = 2;
inline bool User::has_pwd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void User::set_has_pwd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void User::clear_has_pwd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void User::clear_pwd() {
  pwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pwd();
}
inline const ::std::string& User::pwd() const {
  // @@protoc_insertion_point(field_get:design.User.pwd)
  return pwd_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void User::set_pwd(const ::std::string& value) {
  set_has_pwd();
  pwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:design.User.pwd)
}
inline void User::set_pwd(const char* value) {
  set_has_pwd();
  pwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:design.User.pwd)
}
inline void User::set_pwd(const char* value, size_t size) {
  set_has_pwd();
  pwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:design.User.pwd)
}
inline ::std::string* User::mutable_pwd() {
  set_has_pwd();
  // @@protoc_insertion_point(field_mutable:design.User.pwd)
  return pwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* User::release_pwd() {
  // @@protoc_insertion_point(field_release:design.User.pwd)
  clear_has_pwd();
  return pwd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void User::set_allocated_pwd(::std::string* pwd) {
  if (pwd != NULL) {
    set_has_pwd();
  } else {
    clear_has_pwd();
  }
  pwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pwd);
  // @@protoc_insertion_point(field_set_allocated:design.User.pwd)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace design

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protobuf_2flogin_2eproto__INCLUDED
