// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "VehicleRecords.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace sap {
namespace nic {
namespace itraffic {

namespace {

const ::google::protobuf::Descriptor* Report_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Report_reflection_ = NULL;
const ::google::protobuf::Descriptor* VehicleReports_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VehicleReports_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_VehicleRecords_2eproto() {
  protobuf_AddDesc_VehicleRecords_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "VehicleRecords.proto");
  GOOGLE_CHECK(file != NULL);
  Report_descriptor_ = file->message_type(0);
  static const int Report_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, gpsdata_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, devid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, stime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, alarmflag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, latitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, longtitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, speed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, orientation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, gpstime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, odometer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, oilgauge_),
  };
  Report_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Report_descriptor_,
      Report::default_instance_,
      Report_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Report, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Report));
  VehicleReports_descriptor_ = file->message_type(1);
  static const int VehicleReports_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleReports, report_numer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleReports, report_),
  };
  VehicleReports_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      VehicleReports_descriptor_,
      VehicleReports::default_instance_,
      VehicleReports_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleReports, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleReports, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(VehicleReports));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_VehicleRecords_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Report_descriptor_, &Report::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    VehicleReports_descriptor_, &VehicleReports::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_VehicleRecords_2eproto() {
  delete Report::default_instance_;
  delete Report_reflection_;
  delete VehicleReports::default_instance_;
  delete VehicleReports_reflection_;
}

void protobuf_AddDesc_VehicleRecords_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024VehicleRecords.proto\022\024com.sap.nic.itra"
    "ffic\"\333\001\n\006Report\022\022\n\ngpsdata_id\030\001 \001(\006\022\r\n\005d"
    "evid\030\002 \002(\t\022\r\n\005stime\030\003 \001(\020\022\021\n\talarmflag\030\004"
    " \001(\007\022\r\n\005state\030\005 \001(\007\022\020\n\010latitude\030\006 \001(\001\022\022\n"
    "\nlongtitude\030\007 \001(\001\022\r\n\005speed\030\010 \001(\021\022\023\n\013orie"
    "ntation\030\t \001(\001\022\017\n\007gpstime\030\n \002(\020\022\020\n\010odomet"
    "er\030\013 \001(\001\022\020\n\010oilgauge\030\014 \001(\001\"T\n\016VehicleRep"
    "orts\022\024\n\014report_numer\030\001 \002(\r\022,\n\006report\030\002 \003"
    "(\0132\034.com.sap.nic.itraffic.Report", 352);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VehicleRecords.proto", &protobuf_RegisterTypes);
  Report::default_instance_ = new Report();
  VehicleReports::default_instance_ = new VehicleReports();
  Report::default_instance_->InitAsDefaultInstance();
  VehicleReports::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_VehicleRecords_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_VehicleRecords_2eproto {
  StaticDescriptorInitializer_VehicleRecords_2eproto() {
    protobuf_AddDesc_VehicleRecords_2eproto();
  }
} static_descriptor_initializer_VehicleRecords_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Report::kGpsdataIdFieldNumber;
const int Report::kDevidFieldNumber;
const int Report::kStimeFieldNumber;
const int Report::kAlarmflagFieldNumber;
const int Report::kStateFieldNumber;
const int Report::kLatitudeFieldNumber;
const int Report::kLongtitudeFieldNumber;
const int Report::kSpeedFieldNumber;
const int Report::kOrientationFieldNumber;
const int Report::kGpstimeFieldNumber;
const int Report::kOdometerFieldNumber;
const int Report::kOilgaugeFieldNumber;
#endif  // !_MSC_VER

Report::Report()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Report::InitAsDefaultInstance() {
}

Report::Report(const Report& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Report::SharedCtor() {
  _cached_size_ = 0;
  gpsdata_id_ = GOOGLE_ULONGLONG(0);
  devid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  stime_ = GOOGLE_LONGLONG(0);
  alarmflag_ = 0u;
  state_ = 0u;
  latitude_ = 0;
  longtitude_ = 0;
  speed_ = 0;
  orientation_ = 0;
  gpstime_ = GOOGLE_LONGLONG(0);
  odometer_ = 0;
  oilgauge_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Report::~Report() {
  SharedDtor();
}

void Report::SharedDtor() {
  if (devid_ != &::google::protobuf::internal::kEmptyString) {
    delete devid_;
  }
  if (this != default_instance_) {
  }
}

void Report::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Report::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Report_descriptor_;
}

const Report& Report::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_VehicleRecords_2eproto();  return *default_instance_;
}

Report* Report::default_instance_ = NULL;

Report* Report::New() const {
  return new Report;
}

void Report::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    gpsdata_id_ = GOOGLE_ULONGLONG(0);
    if (has_devid()) {
      if (devid_ != &::google::protobuf::internal::kEmptyString) {
        devid_->clear();
      }
    }
    stime_ = GOOGLE_LONGLONG(0);
    alarmflag_ = 0u;
    state_ = 0u;
    latitude_ = 0;
    longtitude_ = 0;
    speed_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    orientation_ = 0;
    gpstime_ = GOOGLE_LONGLONG(0);
    odometer_ = 0;
    oilgauge_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Report::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 gpsdata_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &gpsdata_id_)));
          set_has_gpsdata_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_devid;
        break;
      }
      
      // required string devid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_devid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_devid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->devid().data(), this->devid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_stime;
        break;
      }
      
      // optional sfixed64 stime = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_stime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED64>(
                 input, &stime_)));
          set_has_stime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_alarmflag;
        break;
      }
      
      // optional fixed32 alarmflag = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_alarmflag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &alarmflag_)));
          set_has_alarmflag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(45)) goto parse_state;
        break;
      }
      
      // optional fixed32 state = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_state:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &state_)));
          set_has_state();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(49)) goto parse_latitude;
        break;
      }
      
      // optional double latitude = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_latitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_)));
          set_has_latitude();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(57)) goto parse_longtitude;
        break;
      }
      
      // optional double longtitude = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_longtitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longtitude_)));
          set_has_longtitude();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_speed;
        break;
      }
      
      // optional sint32 speed = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_speed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &speed_)));
          set_has_speed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(73)) goto parse_orientation;
        break;
      }
      
      // optional double orientation = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_orientation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &orientation_)));
          set_has_orientation();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(81)) goto parse_gpstime;
        break;
      }
      
      // required sfixed64 gpstime = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_gpstime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED64>(
                 input, &gpstime_)));
          set_has_gpstime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(89)) goto parse_odometer;
        break;
      }
      
      // optional double odometer = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_odometer:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &odometer_)));
          set_has_odometer();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(97)) goto parse_oilgauge;
        break;
      }
      
      // optional double oilgauge = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_oilgauge:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &oilgauge_)));
          set_has_oilgauge();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Report::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional fixed64 gpsdata_id = 1;
  if (has_gpsdata_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->gpsdata_id(), output);
  }
  
  // required string devid = 2;
  if (has_devid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->devid().data(), this->devid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->devid(), output);
  }
  
  // optional sfixed64 stime = 3;
  if (has_stime()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(3, this->stime(), output);
  }
  
  // optional fixed32 alarmflag = 4;
  if (has_alarmflag()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(4, this->alarmflag(), output);
  }
  
  // optional fixed32 state = 5;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(5, this->state(), output);
  }
  
  // optional double latitude = 6;
  if (has_latitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->latitude(), output);
  }
  
  // optional double longtitude = 7;
  if (has_longtitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->longtitude(), output);
  }
  
  // optional sint32 speed = 8;
  if (has_speed()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(8, this->speed(), output);
  }
  
  // optional double orientation = 9;
  if (has_orientation()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->orientation(), output);
  }
  
  // required sfixed64 gpstime = 10;
  if (has_gpstime()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(10, this->gpstime(), output);
  }
  
  // optional double odometer = 11;
  if (has_odometer()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->odometer(), output);
  }
  
  // optional double oilgauge = 12;
  if (has_oilgauge()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->oilgauge(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Report::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional fixed64 gpsdata_id = 1;
  if (has_gpsdata_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->gpsdata_id(), target);
  }
  
  // required string devid = 2;
  if (has_devid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->devid().data(), this->devid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->devid(), target);
  }
  
  // optional sfixed64 stime = 3;
  if (has_stime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(3, this->stime(), target);
  }
  
  // optional fixed32 alarmflag = 4;
  if (has_alarmflag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(4, this->alarmflag(), target);
  }
  
  // optional fixed32 state = 5;
  if (has_state()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(5, this->state(), target);
  }
  
  // optional double latitude = 6;
  if (has_latitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->latitude(), target);
  }
  
  // optional double longtitude = 7;
  if (has_longtitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->longtitude(), target);
  }
  
  // optional sint32 speed = 8;
  if (has_speed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(8, this->speed(), target);
  }
  
  // optional double orientation = 9;
  if (has_orientation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->orientation(), target);
  }
  
  // required sfixed64 gpstime = 10;
  if (has_gpstime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(10, this->gpstime(), target);
  }
  
  // optional double odometer = 11;
  if (has_odometer()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->odometer(), target);
  }
  
  // optional double oilgauge = 12;
  if (has_oilgauge()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(12, this->oilgauge(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Report::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional fixed64 gpsdata_id = 1;
    if (has_gpsdata_id()) {
      total_size += 1 + 8;
    }
    
    // required string devid = 2;
    if (has_devid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->devid());
    }
    
    // optional sfixed64 stime = 3;
    if (has_stime()) {
      total_size += 1 + 8;
    }
    
    // optional fixed32 alarmflag = 4;
    if (has_alarmflag()) {
      total_size += 1 + 4;
    }
    
    // optional fixed32 state = 5;
    if (has_state()) {
      total_size += 1 + 4;
    }
    
    // optional double latitude = 6;
    if (has_latitude()) {
      total_size += 1 + 8;
    }
    
    // optional double longtitude = 7;
    if (has_longtitude()) {
      total_size += 1 + 8;
    }
    
    // optional sint32 speed = 8;
    if (has_speed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->speed());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional double orientation = 9;
    if (has_orientation()) {
      total_size += 1 + 8;
    }
    
    // required sfixed64 gpstime = 10;
    if (has_gpstime()) {
      total_size += 1 + 8;
    }
    
    // optional double odometer = 11;
    if (has_odometer()) {
      total_size += 1 + 8;
    }
    
    // optional double oilgauge = 12;
    if (has_oilgauge()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Report::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Report* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Report*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Report::MergeFrom(const Report& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_gpsdata_id()) {
      set_gpsdata_id(from.gpsdata_id());
    }
    if (from.has_devid()) {
      set_devid(from.devid());
    }
    if (from.has_stime()) {
      set_stime(from.stime());
    }
    if (from.has_alarmflag()) {
      set_alarmflag(from.alarmflag());
    }
    if (from.has_state()) {
      set_state(from.state());
    }
    if (from.has_latitude()) {
      set_latitude(from.latitude());
    }
    if (from.has_longtitude()) {
      set_longtitude(from.longtitude());
    }
    if (from.has_speed()) {
      set_speed(from.speed());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_orientation()) {
      set_orientation(from.orientation());
    }
    if (from.has_gpstime()) {
      set_gpstime(from.gpstime());
    }
    if (from.has_odometer()) {
      set_odometer(from.odometer());
    }
    if (from.has_oilgauge()) {
      set_oilgauge(from.oilgauge());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Report::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Report::CopyFrom(const Report& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Report::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000202) != 0x00000202) return false;
  
  return true;
}

void Report::Swap(Report* other) {
  if (other != this) {
    std::swap(gpsdata_id_, other->gpsdata_id_);
    std::swap(devid_, other->devid_);
    std::swap(stime_, other->stime_);
    std::swap(alarmflag_, other->alarmflag_);
    std::swap(state_, other->state_);
    std::swap(latitude_, other->latitude_);
    std::swap(longtitude_, other->longtitude_);
    std::swap(speed_, other->speed_);
    std::swap(orientation_, other->orientation_);
    std::swap(gpstime_, other->gpstime_);
    std::swap(odometer_, other->odometer_);
    std::swap(oilgauge_, other->oilgauge_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Report::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Report_descriptor_;
  metadata.reflection = Report_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int VehicleReports::kReportNumerFieldNumber;
const int VehicleReports::kReportFieldNumber;
#endif  // !_MSC_VER

VehicleReports::VehicleReports()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void VehicleReports::InitAsDefaultInstance() {
}

VehicleReports::VehicleReports(const VehicleReports& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void VehicleReports::SharedCtor() {
  _cached_size_ = 0;
  report_numer_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

VehicleReports::~VehicleReports() {
  SharedDtor();
}

void VehicleReports::SharedDtor() {
  if (this != default_instance_) {
  }
}

void VehicleReports::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VehicleReports::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VehicleReports_descriptor_;
}

const VehicleReports& VehicleReports::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_VehicleRecords_2eproto();  return *default_instance_;
}

VehicleReports* VehicleReports::default_instance_ = NULL;

VehicleReports* VehicleReports::New() const {
  return new VehicleReports;
}

void VehicleReports::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    report_numer_ = 0u;
  }
  report_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool VehicleReports::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 report_numer = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &report_numer_)));
          set_has_report_numer();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_report;
        break;
      }
      
      // repeated .com.sap.nic.itraffic.Report report = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_report:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_report()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_report;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void VehicleReports::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 report_numer = 1;
  if (has_report_numer()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->report_numer(), output);
  }
  
  // repeated .com.sap.nic.itraffic.Report report = 2;
  for (int i = 0; i < this->report_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->report(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* VehicleReports::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 report_numer = 1;
  if (has_report_numer()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->report_numer(), target);
  }
  
  // repeated .com.sap.nic.itraffic.Report report = 2;
  for (int i = 0; i < this->report_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->report(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int VehicleReports::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 report_numer = 1;
    if (has_report_numer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->report_numer());
    }
    
  }
  // repeated .com.sap.nic.itraffic.Report report = 2;
  total_size += 1 * this->report_size();
  for (int i = 0; i < this->report_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->report(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VehicleReports::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const VehicleReports* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const VehicleReports*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VehicleReports::MergeFrom(const VehicleReports& from) {
  GOOGLE_CHECK_NE(&from, this);
  report_.MergeFrom(from.report_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_report_numer()) {
      set_report_numer(from.report_numer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void VehicleReports::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleReports::CopyFrom(const VehicleReports& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleReports::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < report_size(); i++) {
    if (!this->report(i).IsInitialized()) return false;
  }
  return true;
}

void VehicleReports::Swap(VehicleReports* other) {
  if (other != this) {
    std::swap(report_numer_, other->report_numer_);
    report_.Swap(&other->report_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata VehicleReports::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VehicleReports_descriptor_;
  metadata.reflection = VehicleReports_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace itraffic
}  // namespace nic
}  // namespace sap
}  // namespace com

// @@protoc_insertion_point(global_scope)
