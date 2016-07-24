// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rdb_config.proto

#ifndef PROTOBUF_rdb_5fconfig_2eproto__INCLUDED
#define PROTOBUF_rdb_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace reedb_proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rdb_5fconfig_2eproto();
void protobuf_AssignDesc_rdb_5fconfig_2eproto();
void protobuf_ShutdownFile_rdb_5fconfig_2eproto();

class rdb_config;
class rdb_config_vault;

// ===================================================================

class rdb_config_vault : public ::google::protobuf::Message {
 public:
  rdb_config_vault();
  virtual ~rdb_config_vault();

  rdb_config_vault(const rdb_config_vault& from);

  inline rdb_config_vault& operator=(const rdb_config_vault& from) {
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
  static const rdb_config_vault& default_instance();

  void Swap(rdb_config_vault* other);

  // implements Message ----------------------------------------------

  rdb_config_vault* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const rdb_config_vault& from);
  void MergeFrom(const rdb_config_vault& from);
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

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string path = 2;
  inline bool has_path() const;
  inline void clear_path();
  static const int kPathFieldNumber = 2;
  inline const ::std::string& path() const;
  inline void set_path(const ::std::string& value);
  inline void set_path(const char* value);
  inline void set_path(const char* value, size_t size);
  inline ::std::string* mutable_path();
  inline ::std::string* release_path();
  inline void set_allocated_path(::std::string* path);

  // required string uuid = 3;
  inline bool has_uuid() const;
  inline void clear_uuid();
  static const int kUuidFieldNumber = 3;
  inline const ::std::string& uuid() const;
  inline void set_uuid(const ::std::string& value);
  inline void set_uuid(const char* value);
  inline void set_uuid(const char* value, size_t size);
  inline ::std::string* mutable_uuid();
  inline ::std::string* release_uuid();
  inline void set_allocated_uuid(::std::string* uuid);

  // required int64 size = 4;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 4;
  inline ::google::protobuf::int64 size() const;
  inline void set_size(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:reedb_proto.rdb_config.vault)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_path();
  inline void clear_has_path();
  inline void set_has_uuid();
  inline void clear_has_uuid();
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::std::string* path_;
  ::std::string* uuid_;
  ::google::protobuf::int64 size_;
  friend void  protobuf_AddDesc_rdb_5fconfig_2eproto();
  friend void protobuf_AssignDesc_rdb_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_rdb_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static rdb_config_vault* default_instance_;
};
// -------------------------------------------------------------------

class rdb_config : public ::google::protobuf::Message {
 public:
  rdb_config();
  virtual ~rdb_config();

  rdb_config(const rdb_config& from);

  inline rdb_config& operator=(const rdb_config& from) {
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
  static const rdb_config& default_instance();

  void Swap(rdb_config* other);

  // implements Message ----------------------------------------------

  rdb_config* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const rdb_config& from);
  void MergeFrom(const rdb_config& from);
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

  typedef rdb_config_vault vault;

  // accessors -------------------------------------------------------

  // required string machine = 1;
  inline bool has_machine() const;
  inline void clear_machine();
  static const int kMachineFieldNumber = 1;
  inline const ::std::string& machine() const;
  inline void set_machine(const ::std::string& value);
  inline void set_machine(const char* value);
  inline void set_machine(const char* value, size_t size);
  inline ::std::string* mutable_machine();
  inline ::std::string* release_machine();
  inline void set_allocated_machine(::std::string* machine);

  // repeated .reedb_proto.rdb_config.vault scoped = 2;
  inline int scoped_size() const;
  inline void clear_scoped();
  static const int kScopedFieldNumber = 2;
  inline const ::reedb_proto::rdb_config_vault& scoped(int index) const;
  inline ::reedb_proto::rdb_config_vault* mutable_scoped(int index);
  inline ::reedb_proto::rdb_config_vault* add_scoped();
  inline const ::google::protobuf::RepeatedPtrField< ::reedb_proto::rdb_config_vault >&
      scoped() const;
  inline ::google::protobuf::RepeatedPtrField< ::reedb_proto::rdb_config_vault >*
      mutable_scoped();

  // @@protoc_insertion_point(class_scope:reedb_proto.rdb_config)
 private:
  inline void set_has_machine();
  inline void clear_has_machine();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* machine_;
  ::google::protobuf::RepeatedPtrField< ::reedb_proto::rdb_config_vault > scoped_;
  friend void  protobuf_AddDesc_rdb_5fconfig_2eproto();
  friend void protobuf_AssignDesc_rdb_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_rdb_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static rdb_config* default_instance_;
};
// ===================================================================


// ===================================================================

// rdb_config_vault

// required string name = 1;
inline bool rdb_config_vault::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void rdb_config_vault::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void rdb_config_vault::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void rdb_config_vault::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& rdb_config_vault::name() const {
  // @@protoc_insertion_point(field_get:reedb_proto.rdb_config.vault.name)
  return *name_;
}
inline void rdb_config_vault::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:reedb_proto.rdb_config.vault.name)
}
inline void rdb_config_vault::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:reedb_proto.rdb_config.vault.name)
}
inline void rdb_config_vault::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:reedb_proto.rdb_config.vault.name)
}
inline ::std::string* rdb_config_vault::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:reedb_proto.rdb_config.vault.name)
  return name_;
}
inline ::std::string* rdb_config_vault::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void rdb_config_vault::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:reedb_proto.rdb_config.vault.name)
}

// required string path = 2;
inline bool rdb_config_vault::has_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void rdb_config_vault::set_has_path() {
  _has_bits_[0] |= 0x00000002u;
}
inline void rdb_config_vault::clear_has_path() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void rdb_config_vault::clear_path() {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_->clear();
  }
  clear_has_path();
}
inline const ::std::string& rdb_config_vault::path() const {
  // @@protoc_insertion_point(field_get:reedb_proto.rdb_config.vault.path)
  return *path_;
}
inline void rdb_config_vault::set_path(const ::std::string& value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(value);
  // @@protoc_insertion_point(field_set:reedb_proto.rdb_config.vault.path)
}
inline void rdb_config_vault::set_path(const char* value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(value);
  // @@protoc_insertion_point(field_set_char:reedb_proto.rdb_config.vault.path)
}
inline void rdb_config_vault::set_path(const char* value, size_t size) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:reedb_proto.rdb_config.vault.path)
}
inline ::std::string* rdb_config_vault::mutable_path() {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:reedb_proto.rdb_config.vault.path)
  return path_;
}
inline ::std::string* rdb_config_vault::release_path() {
  clear_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = path_;
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void rdb_config_vault::set_allocated_path(::std::string* path) {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete path_;
  }
  if (path) {
    set_has_path();
    path_ = path;
  } else {
    clear_has_path();
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:reedb_proto.rdb_config.vault.path)
}

// required string uuid = 3;
inline bool rdb_config_vault::has_uuid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void rdb_config_vault::set_has_uuid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void rdb_config_vault::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void rdb_config_vault::clear_uuid() {
  if (uuid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uuid_->clear();
  }
  clear_has_uuid();
}
inline const ::std::string& rdb_config_vault::uuid() const {
  // @@protoc_insertion_point(field_get:reedb_proto.rdb_config.vault.uuid)
  return *uuid_;
}
inline void rdb_config_vault::set_uuid(const ::std::string& value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
  // @@protoc_insertion_point(field_set:reedb_proto.rdb_config.vault.uuid)
}
inline void rdb_config_vault::set_uuid(const char* value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
  // @@protoc_insertion_point(field_set_char:reedb_proto.rdb_config.vault.uuid)
}
inline void rdb_config_vault::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:reedb_proto.rdb_config.vault.uuid)
}
inline ::std::string* rdb_config_vault::mutable_uuid() {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uuid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:reedb_proto.rdb_config.vault.uuid)
  return uuid_;
}
inline ::std::string* rdb_config_vault::release_uuid() {
  clear_has_uuid();
  if (uuid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = uuid_;
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void rdb_config_vault::set_allocated_uuid(::std::string* uuid) {
  if (uuid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete uuid_;
  }
  if (uuid) {
    set_has_uuid();
    uuid_ = uuid;
  } else {
    clear_has_uuid();
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:reedb_proto.rdb_config.vault.uuid)
}

// required int64 size = 4;
inline bool rdb_config_vault::has_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void rdb_config_vault::set_has_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void rdb_config_vault::clear_has_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void rdb_config_vault::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
  clear_has_size();
}
inline ::google::protobuf::int64 rdb_config_vault::size() const {
  // @@protoc_insertion_point(field_get:reedb_proto.rdb_config.vault.size)
  return size_;
}
inline void rdb_config_vault::set_size(::google::protobuf::int64 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:reedb_proto.rdb_config.vault.size)
}

// -------------------------------------------------------------------

// rdb_config

// required string machine = 1;
inline bool rdb_config::has_machine() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void rdb_config::set_has_machine() {
  _has_bits_[0] |= 0x00000001u;
}
inline void rdb_config::clear_has_machine() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void rdb_config::clear_machine() {
  if (machine_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    machine_->clear();
  }
  clear_has_machine();
}
inline const ::std::string& rdb_config::machine() const {
  // @@protoc_insertion_point(field_get:reedb_proto.rdb_config.machine)
  return *machine_;
}
inline void rdb_config::set_machine(const ::std::string& value) {
  set_has_machine();
  if (machine_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    machine_ = new ::std::string;
  }
  machine_->assign(value);
  // @@protoc_insertion_point(field_set:reedb_proto.rdb_config.machine)
}
inline void rdb_config::set_machine(const char* value) {
  set_has_machine();
  if (machine_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    machine_ = new ::std::string;
  }
  machine_->assign(value);
  // @@protoc_insertion_point(field_set_char:reedb_proto.rdb_config.machine)
}
inline void rdb_config::set_machine(const char* value, size_t size) {
  set_has_machine();
  if (machine_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    machine_ = new ::std::string;
  }
  machine_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:reedb_proto.rdb_config.machine)
}
inline ::std::string* rdb_config::mutable_machine() {
  set_has_machine();
  if (machine_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    machine_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:reedb_proto.rdb_config.machine)
  return machine_;
}
inline ::std::string* rdb_config::release_machine() {
  clear_has_machine();
  if (machine_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = machine_;
    machine_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void rdb_config::set_allocated_machine(::std::string* machine) {
  if (machine_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete machine_;
  }
  if (machine) {
    set_has_machine();
    machine_ = machine;
  } else {
    clear_has_machine();
    machine_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:reedb_proto.rdb_config.machine)
}

// repeated .reedb_proto.rdb_config.vault scoped = 2;
inline int rdb_config::scoped_size() const {
  return scoped_.size();
}
inline void rdb_config::clear_scoped() {
  scoped_.Clear();
}
inline const ::reedb_proto::rdb_config_vault& rdb_config::scoped(int index) const {
  // @@protoc_insertion_point(field_get:reedb_proto.rdb_config.scoped)
  return scoped_.Get(index);
}
inline ::reedb_proto::rdb_config_vault* rdb_config::mutable_scoped(int index) {
  // @@protoc_insertion_point(field_mutable:reedb_proto.rdb_config.scoped)
  return scoped_.Mutable(index);
}
inline ::reedb_proto::rdb_config_vault* rdb_config::add_scoped() {
  // @@protoc_insertion_point(field_add:reedb_proto.rdb_config.scoped)
  return scoped_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::reedb_proto::rdb_config_vault >&
rdb_config::scoped() const {
  // @@protoc_insertion_point(field_list:reedb_proto.rdb_config.scoped)
  return scoped_;
}
inline ::google::protobuf::RepeatedPtrField< ::reedb_proto::rdb_config_vault >*
rdb_config::mutable_scoped() {
  // @@protoc_insertion_point(field_mutable_list:reedb_proto.rdb_config.scoped)
  return &scoped_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace reedb_proto

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rdb_5fconfig_2eproto__INCLUDED
