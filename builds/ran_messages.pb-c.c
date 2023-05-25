/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ran_messages.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ran_messages.pb-c.h"
void   ran_param_map_entry__init
                     (RANParamMapEntry         *message)
{
  static const RANParamMapEntry init_value = RAN_PARAM_MAP_ENTRY__INIT;
  *message = init_value;
}
size_t ran_param_map_entry__get_packed_size
                     (const RANParamMapEntry *message)
{
  assert(message->base.descriptor == &ran_param_map_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ran_param_map_entry__pack
                     (const RANParamMapEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ran_param_map_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ran_param_map_entry__pack_to_buffer
                     (const RANParamMapEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ran_param_map_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RANParamMapEntry *
       ran_param_map_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RANParamMapEntry *)
     protobuf_c_message_unpack (&ran_param_map_entry__descriptor,
                                allocator, len, data);
}
void   ran_param_map_entry__free_unpacked
                     (RANParamMapEntry *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ran_param_map_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ran_indication_request__init
                     (RANIndicationRequest         *message)
{
  static const RANIndicationRequest init_value = RAN_INDICATION_REQUEST__INIT;
  *message = init_value;
}
size_t ran_indication_request__get_packed_size
                     (const RANIndicationRequest *message)
{
  assert(message->base.descriptor == &ran_indication_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ran_indication_request__pack
                     (const RANIndicationRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ran_indication_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ran_indication_request__pack_to_buffer
                     (const RANIndicationRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ran_indication_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RANIndicationRequest *
       ran_indication_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RANIndicationRequest *)
     protobuf_c_message_unpack (&ran_indication_request__descriptor,
                                allocator, len, data);
}
void   ran_indication_request__free_unpacked
                     (RANIndicationRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ran_indication_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ran_indication_response__init
                     (RANIndicationResponse         *message)
{
  static const RANIndicationResponse init_value = RAN_INDICATION_RESPONSE__INIT;
  *message = init_value;
}
size_t ran_indication_response__get_packed_size
                     (const RANIndicationResponse *message)
{
  assert(message->base.descriptor == &ran_indication_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ran_indication_response__pack
                     (const RANIndicationResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ran_indication_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ran_indication_response__pack_to_buffer
                     (const RANIndicationResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ran_indication_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RANIndicationResponse *
       ran_indication_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RANIndicationResponse *)
     protobuf_c_message_unpack (&ran_indication_response__descriptor,
                                allocator, len, data);
}
void   ran_indication_response__free_unpacked
                     (RANIndicationResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ran_indication_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ran_control_request__init
                     (RANControlRequest         *message)
{
  static const RANControlRequest init_value = RAN_CONTROL_REQUEST__INIT;
  *message = init_value;
}
size_t ran_control_request__get_packed_size
                     (const RANControlRequest *message)
{
  assert(message->base.descriptor == &ran_control_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ran_control_request__pack
                     (const RANControlRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ran_control_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ran_control_request__pack_to_buffer
                     (const RANControlRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ran_control_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RANControlRequest *
       ran_control_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RANControlRequest *)
     protobuf_c_message_unpack (&ran_control_request__descriptor,
                                allocator, len, data);
}
void   ran_control_request__free_unpacked
                     (RANControlRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ran_control_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ran_message__init
                     (RANMessage         *message)
{
  static const RANMessage init_value = RAN_MESSAGE__INIT;
  *message = init_value;
}
size_t ran_message__get_packed_size
                     (const RANMessage *message)
{
  assert(message->base.descriptor == &ran_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ran_message__pack
                     (const RANMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ran_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ran_message__pack_to_buffer
                     (const RANMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ran_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RANMessage *
       ran_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RANMessage *)
     protobuf_c_message_unpack (&ran_message__descriptor,
                                allocator, len, data);
}
void   ran_message__free_unpacked
                     (RANMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ran_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ue_info_m__init
                     (UeInfoM         *message)
{
  static const UeInfoM init_value = UE_INFO_M__INIT;
  *message = init_value;
}
size_t ue_info_m__get_packed_size
                     (const UeInfoM *message)
{
  assert(message->base.descriptor == &ue_info_m__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ue_info_m__pack
                     (const UeInfoM *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ue_info_m__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ue_info_m__pack_to_buffer
                     (const UeInfoM *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ue_info_m__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UeInfoM *
       ue_info_m__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UeInfoM *)
     protobuf_c_message_unpack (&ue_info_m__descriptor,
                                allocator, len, data);
}
void   ue_info_m__free_unpacked
                     (UeInfoM *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ue_info_m__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ue_list_m__init
                     (UeListM         *message)
{
  static const UeListM init_value = UE_LIST_M__INIT;
  *message = init_value;
}
size_t ue_list_m__get_packed_size
                     (const UeListM *message)
{
  assert(message->base.descriptor == &ue_list_m__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ue_list_m__pack
                     (const UeListM *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ue_list_m__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ue_list_m__pack_to_buffer
                     (const UeListM *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ue_list_m__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UeListM *
       ue_list_m__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UeListM *)
     protobuf_c_message_unpack (&ue_list_m__descriptor,
                                allocator, len, data);
}
void   ue_list_m__free_unpacked
                     (UeListM *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ue_list_m__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   sched_control_m__init
                     (SchedControlM         *message)
{
  static const SchedControlM init_value = SCHED_CONTROL_M__INIT;
  *message = init_value;
}
size_t sched_control_m__get_packed_size
                     (const SchedControlM *message)
{
  assert(message->base.descriptor == &sched_control_m__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sched_control_m__pack
                     (const SchedControlM *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &sched_control_m__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sched_control_m__pack_to_buffer
                     (const SchedControlM *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &sched_control_m__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SchedControlM *
       sched_control_m__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SchedControlM *)
     protobuf_c_message_unpack (&sched_control_m__descriptor,
                                allocator, len, data);
}
void   sched_control_m__free_unpacked
                     (SchedControlM *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &sched_control_m__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ran_param_map_entry__field_descriptors[4] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(RANParamMapEntry, key),
    &ran_parameter__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "int64_value",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(RANParamMapEntry, value_case),
    offsetof(RANParamMapEntry, int64_value),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "string_value",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    offsetof(RANParamMapEntry, value_case),
    offsetof(RANParamMapEntry, string_value),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_list",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RANParamMapEntry, value_case),
    offsetof(RANParamMapEntry, ue_list),
    &ue_list_m__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ran_param_map_entry__field_indices_by_name[] = {
  1,   /* field[1] = int64_value */
  0,   /* field[0] = key */
  2,   /* field[2] = string_value */
  3,   /* field[3] = ue_list */
};
static const ProtobufCIntRange ran_param_map_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ran_param_map_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RAN_param_map_entry",
  "RANParamMapEntry",
  "RANParamMapEntry",
  "",
  sizeof(RANParamMapEntry),
  4,
  ran_param_map_entry__field_descriptors,
  ran_param_map_entry__field_indices_by_name,
  1,  ran_param_map_entry__number_ranges,
  (ProtobufCMessageInit) ran_param_map_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ran_indication_request__field_descriptors[1] =
{
  {
    "target_params",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(RANIndicationRequest, n_target_params),
    offsetof(RANIndicationRequest, target_params),
    &ran_parameter__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ran_indication_request__field_indices_by_name[] = {
  0,   /* field[0] = target_params */
};
static const ProtobufCIntRange ran_indication_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ran_indication_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RAN_indication_request",
  "RANIndicationRequest",
  "RANIndicationRequest",
  "",
  sizeof(RANIndicationRequest),
  1,
  ran_indication_request__field_descriptors,
  ran_indication_request__field_indices_by_name,
  1,  ran_indication_request__number_ranges,
  (ProtobufCMessageInit) ran_indication_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ran_indication_response__field_descriptors[1] =
{
  {
    "param_map",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RANIndicationResponse, n_param_map),
    offsetof(RANIndicationResponse, param_map),
    &ran_param_map_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ran_indication_response__field_indices_by_name[] = {
  0,   /* field[0] = param_map */
};
static const ProtobufCIntRange ran_indication_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ran_indication_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RAN_indication_response",
  "RANIndicationResponse",
  "RANIndicationResponse",
  "",
  sizeof(RANIndicationResponse),
  1,
  ran_indication_response__field_descriptors,
  ran_indication_response__field_indices_by_name,
  1,  ran_indication_response__number_ranges,
  (ProtobufCMessageInit) ran_indication_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ran_control_request__field_descriptors[1] =
{
  {
    "target_param_map",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RANControlRequest, n_target_param_map),
    offsetof(RANControlRequest, target_param_map),
    &ran_param_map_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ran_control_request__field_indices_by_name[] = {
  0,   /* field[0] = target_param_map */
};
static const ProtobufCIntRange ran_control_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ran_control_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RAN_control_request",
  "RANControlRequest",
  "RANControlRequest",
  "",
  sizeof(RANControlRequest),
  1,
  ran_control_request__field_descriptors,
  ran_control_request__field_indices_by_name,
  1,  ran_control_request__number_ranges,
  (ProtobufCMessageInit) ran_control_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ran_message__field_descriptors[4] =
{
  {
    "msg_type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(RANMessage, msg_type),
    &ran_message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ran_indication_request",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RANMessage, payload_case),
    offsetof(RANMessage, ran_indication_request),
    &ran_indication_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ran_indication_response",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RANMessage, payload_case),
    offsetof(RANMessage, ran_indication_response),
    &ran_indication_response__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ran_control_request",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RANMessage, payload_case),
    offsetof(RANMessage, ran_control_request),
    &ran_control_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ran_message__field_indices_by_name[] = {
  0,   /* field[0] = msg_type */
  3,   /* field[3] = ran_control_request */
  1,   /* field[1] = ran_indication_request */
  2,   /* field[2] = ran_indication_response */
};
static const ProtobufCIntRange ran_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ran_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RAN_message",
  "RANMessage",
  "RANMessage",
  "",
  sizeof(RANMessage),
  4,
  ran_message__field_descriptors,
  ran_message__field_indices_by_name,
  1,  ran_message__number_ranges,
  (ProtobufCMessageInit) ran_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ue_info_m__field_descriptors[6] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(UeInfoM, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_avg_dl",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(UeInfoM, has_tbs_avg_dl),
    offsetof(UeInfoM, tbs_avg_dl),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_avg_ul",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(UeInfoM, has_tbs_avg_ul),
    offsetof(UeInfoM, tbs_avg_ul),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_dl_toapply",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(UeInfoM, has_tbs_dl_toapply),
    offsetof(UeInfoM, tbs_dl_toapply),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_ul_toapply",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(UeInfoM, has_tbs_ul_toapply),
    offsetof(UeInfoM, tbs_ul_toapply),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_GBR",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(UeInfoM, has_is_gbr),
    offsetof(UeInfoM, is_gbr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ue_info_m__field_indices_by_name[] = {
  5,   /* field[5] = is_GBR */
  0,   /* field[0] = rnti */
  1,   /* field[1] = tbs_avg_dl */
  2,   /* field[2] = tbs_avg_ul */
  3,   /* field[3] = tbs_dl_toapply */
  4,   /* field[4] = tbs_ul_toapply */
};
static const ProtobufCIntRange ue_info_m__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor ue_info_m__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ue_info_m",
  "UeInfoM",
  "UeInfoM",
  "",
  sizeof(UeInfoM),
  6,
  ue_info_m__field_descriptors,
  ue_info_m__field_indices_by_name,
  1,  ue_info_m__number_ranges,
  (ProtobufCMessageInit) ue_info_m__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ue_list_m__field_descriptors[2] =
{
  {
    "connected_ues",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(UeListM, connected_ues),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_info",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(UeListM, n_ue_info),
    offsetof(UeListM, ue_info),
    &ue_info_m__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ue_list_m__field_indices_by_name[] = {
  0,   /* field[0] = connected_ues */
  1,   /* field[1] = ue_info */
};
static const ProtobufCIntRange ue_list_m__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ue_list_m__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ue_list_m",
  "UeListM",
  "UeListM",
  "",
  sizeof(UeListM),
  2,
  ue_list_m__field_descriptors,
  ue_list_m__field_indices_by_name,
  1,  ue_list_m__number_ranges,
  (ProtobufCMessageInit) ue_list_m__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor sched_control_m__field_descriptors[1] =
{
  {
    "max_cell_allocable_prbs",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(SchedControlM, has_max_cell_allocable_prbs),
    offsetof(SchedControlM, max_cell_allocable_prbs),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sched_control_m__field_indices_by_name[] = {
  0,   /* field[0] = max_cell_allocable_prbs */
};
static const ProtobufCIntRange sched_control_m__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor sched_control_m__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "sched_control_m",
  "SchedControlM",
  "SchedControlM",
  "",
  sizeof(SchedControlM),
  1,
  sched_control_m__field_descriptors,
  sched_control_m__field_indices_by_name,
  1,  sched_control_m__number_ranges,
  (ProtobufCMessageInit) sched_control_m__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue ran_message_type__enum_values_by_number[5] =
{
  { "SUBSCRIPTION", "RAN_MESSAGE_TYPE__SUBSCRIPTION", 1 },
  { "INDICATION_REQUEST", "RAN_MESSAGE_TYPE__INDICATION_REQUEST", 2 },
  { "INDICATION_RESPONSE", "RAN_MESSAGE_TYPE__INDICATION_RESPONSE", 3 },
  { "CONTROL", "RAN_MESSAGE_TYPE__CONTROL", 4 },
  { "SOMETHING_ELSE", "RAN_MESSAGE_TYPE__SOMETHING_ELSE", 5 },
};
static const ProtobufCIntRange ran_message_type__value_ranges[] = {
{1, 0},{0, 5}
};
static const ProtobufCEnumValueIndex ran_message_type__enum_values_by_name[5] =
{
  { "CONTROL", 3 },
  { "INDICATION_REQUEST", 1 },
  { "INDICATION_RESPONSE", 2 },
  { "SOMETHING_ELSE", 4 },
  { "SUBSCRIPTION", 0 },
};
const ProtobufCEnumDescriptor ran_message_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "RAN_message_type",
  "RAN_message_type",
  "RANMessageType",
  "",
  5,
  ran_message_type__enum_values_by_number,
  5,
  ran_message_type__enum_values_by_name,
  1,
  ran_message_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue ran_parameter__enum_values_by_number[5] =
{
  { "GNB_ID", "RAN_PARAMETER__GNB_ID", 1 },
  { "SOMETHING", "RAN_PARAMETER__SOMETHING", 2 },
  { "UE_LIST", "RAN_PARAMETER__UE_LIST", 3 },
  { "SCHED_INFO_", "RAN_PARAMETER__SCHED_INFO_", 4 },
  { "SCHED_CONTROL", "RAN_PARAMETER__SCHED_CONTROL", 5 },
};
static const ProtobufCIntRange ran_parameter__value_ranges[] = {
{1, 0},{0, 5}
};
static const ProtobufCEnumValueIndex ran_parameter__enum_values_by_name[5] =
{
  { "GNB_ID", 0 },
  { "SCHED_CONTROL", 4 },
  { "SCHED_INFO_", 3 },
  { "SOMETHING", 1 },
  { "UE_LIST", 2 },
};
const ProtobufCEnumDescriptor ran_parameter__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "RAN_parameter",
  "RAN_parameter",
  "RANParameter",
  "",
  5,
  ran_parameter__enum_values_by_number,
  5,
  ran_parameter__enum_values_by_name,
  1,
  ran_parameter__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
