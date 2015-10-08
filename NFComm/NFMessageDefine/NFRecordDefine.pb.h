// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFRecordDefine.proto

#ifndef PROTOBUF_NFRecordDefine_2eproto__INCLUDED
#define PROTOBUF_NFRecordDefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_NFRecordDefine_2eproto();
void protobuf_AssignDesc_NFRecordDefine_2eproto();
void protobuf_ShutdownFile_NFRecordDefine_2eproto();


enum BuildingList_RecordColType {
  BuildingList_BuildingID = 0,
  BuildingList_BuildingGUID = 1,
  BuildingList_State = 2,
  BuildingList_PosX = 3,
  BuildingList_PosY = 4,
  BuildingList_PosZ = 5,
  BuildingList_StateStartTime = 6,
  BuildingList_StateEndTime = 7
};
bool BuildingList_RecordColType_IsValid(int value);
const BuildingList_RecordColType BuildingList_RecordColType_MIN = BuildingList_BuildingID;
const BuildingList_RecordColType BuildingList_RecordColType_MAX = BuildingList_StateEndTime;
const int BuildingList_RecordColType_ARRAYSIZE = BuildingList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BuildingList_RecordColType_descriptor();
inline const ::std::string& BuildingList_RecordColType_Name(BuildingList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BuildingList_RecordColType_descriptor(), value);
}
inline bool BuildingList_RecordColType_Parse(
    const ::std::string& name, BuildingList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BuildingList_RecordColType>(
    BuildingList_RecordColType_descriptor(), name, value);
}
enum BuildingProduce_RecordColType {
  BuildingProduce_BuildingGUID = 0,
  BuildingProduce_ItemID = 1,
  BuildingProduce_LeftCount = 2,
  BuildingProduce_OnceTime = 3,
  BuildingProduce_OnceStartTime = 4
};
bool BuildingProduce_RecordColType_IsValid(int value);
const BuildingProduce_RecordColType BuildingProduce_RecordColType_MIN = BuildingProduce_BuildingGUID;
const BuildingProduce_RecordColType BuildingProduce_RecordColType_MAX = BuildingProduce_OnceStartTime;
const int BuildingProduce_RecordColType_ARRAYSIZE = BuildingProduce_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BuildingProduce_RecordColType_descriptor();
inline const ::std::string& BuildingProduce_RecordColType_Name(BuildingProduce_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BuildingProduce_RecordColType_descriptor(), value);
}
inline bool BuildingProduce_RecordColType_Parse(
    const ::std::string& name, BuildingProduce_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BuildingProduce_RecordColType>(
    BuildingProduce_RecordColType_descriptor(), name, value);
}
enum GuildBoss_RecordColType {
  GuildBoss_GUID = 0,
  GuildBoss_Name = 1,
  GuildBoss_Level = 2,
  GuildBoss_Job = 3,
  GuildBoss_Donation = 4,
  GuildBoss_VIP = 5,
  GuildBoss_Offline = 6,
  GuildBoss_Power = 7
};
bool GuildBoss_RecordColType_IsValid(int value);
const GuildBoss_RecordColType GuildBoss_RecordColType_MIN = GuildBoss_GUID;
const GuildBoss_RecordColType GuildBoss_RecordColType_MAX = GuildBoss_Power;
const int GuildBoss_RecordColType_ARRAYSIZE = GuildBoss_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GuildBoss_RecordColType_descriptor();
inline const ::std::string& GuildBoss_RecordColType_Name(GuildBoss_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GuildBoss_RecordColType_descriptor(), value);
}
inline bool GuildBoss_RecordColType_Parse(
    const ::std::string& name, GuildBoss_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GuildBoss_RecordColType>(
    GuildBoss_RecordColType_descriptor(), name, value);
}
enum GuildMemberList_RecordColType {
  GuildMemberList_GUID = 0,
  GuildMemberList_Name = 1,
  GuildMemberList_Level = 2,
  GuildMemberList_Job = 3,
  GuildMemberList_Donation = 4,
  GuildMemberList_Receive = 5,
  GuildMemberList_VIP = 6,
  GuildMemberList_Online = 7,
  GuildMemberList_Power = 8,
  GuildMemberList_Title = 9,
  GuildMemberList_GameID = 10
};
bool GuildMemberList_RecordColType_IsValid(int value);
const GuildMemberList_RecordColType GuildMemberList_RecordColType_MIN = GuildMemberList_GUID;
const GuildMemberList_RecordColType GuildMemberList_RecordColType_MAX = GuildMemberList_GameID;
const int GuildMemberList_RecordColType_ARRAYSIZE = GuildMemberList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GuildMemberList_RecordColType_descriptor();
inline const ::std::string& GuildMemberList_RecordColType_Name(GuildMemberList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GuildMemberList_RecordColType_descriptor(), value);
}
inline bool GuildMemberList_RecordColType_Parse(
    const ::std::string& name, GuildMemberList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GuildMemberList_RecordColType>(
    GuildMemberList_RecordColType_descriptor(), name, value);
}
enum GuildEvent_RecordColType {
  GuildEvent_GUID = 0,
  GuildEvent_Name = 1,
  GuildEvent_Level = 2,
  GuildEvent_Job = 3,
  GuildEvent_Donation = 4,
  GuildEvent_VIP = 5,
  GuildEvent_Offline = 6,
  GuildEvent_Power = 7
};
bool GuildEvent_RecordColType_IsValid(int value);
const GuildEvent_RecordColType GuildEvent_RecordColType_MIN = GuildEvent_GUID;
const GuildEvent_RecordColType GuildEvent_RecordColType_MAX = GuildEvent_Power;
const int GuildEvent_RecordColType_ARRAYSIZE = GuildEvent_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GuildEvent_RecordColType_descriptor();
inline const ::std::string& GuildEvent_RecordColType_Name(GuildEvent_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GuildEvent_RecordColType_descriptor(), value);
}
inline bool GuildEvent_RecordColType_Parse(
    const ::std::string& name, GuildEvent_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GuildEvent_RecordColType>(
    GuildEvent_RecordColType_descriptor(), name, value);
}
enum GuildHouse_RecordColType {
  GuildHouse_GUID = 0,
  GuildHouse_Name = 1,
  GuildHouse_Level = 2,
  GuildHouse_Job = 3,
  GuildHouse_Donation = 4,
  GuildHouse_VIP = 5,
  GuildHouse_Offline = 6,
  GuildHouse_Power = 7
};
bool GuildHouse_RecordColType_IsValid(int value);
const GuildHouse_RecordColType GuildHouse_RecordColType_MIN = GuildHouse_GUID;
const GuildHouse_RecordColType GuildHouse_RecordColType_MAX = GuildHouse_Power;
const int GuildHouse_RecordColType_ARRAYSIZE = GuildHouse_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GuildHouse_RecordColType_descriptor();
inline const ::std::string& GuildHouse_RecordColType_Name(GuildHouse_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GuildHouse_RecordColType_descriptor(), value);
}
inline bool GuildHouse_RecordColType_Parse(
    const ::std::string& name, GuildHouse_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GuildHouse_RecordColType>(
    GuildHouse_RecordColType_descriptor(), name, value);
}
enum GuildSkill_RecordColType {
  GuildSkill_GUID = 0,
  GuildSkill_Name = 1,
  GuildSkill_Level = 2,
  GuildSkill_Job = 3,
  GuildSkill_Donation = 4,
  GuildSkill_VIP = 5,
  GuildSkill_Offline = 6,
  GuildSkill_Power = 7
};
bool GuildSkill_RecordColType_IsValid(int value);
const GuildSkill_RecordColType GuildSkill_RecordColType_MIN = GuildSkill_GUID;
const GuildSkill_RecordColType GuildSkill_RecordColType_MAX = GuildSkill_Power;
const int GuildSkill_RecordColType_ARRAYSIZE = GuildSkill_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GuildSkill_RecordColType_descriptor();
inline const ::std::string& GuildSkill_RecordColType_Name(GuildSkill_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GuildSkill_RecordColType_descriptor(), value);
}
inline bool GuildSkill_RecordColType_Parse(
    const ::std::string& name, GuildSkill_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GuildSkill_RecordColType>(
    GuildSkill_RecordColType_descriptor(), name, value);
}
enum PosList_RecordColType {
  PosList_X = 0,
  PosList_Y = 1,
  PosList_Z = 2,
  PosList_StayTime = 3
};
bool PosList_RecordColType_IsValid(int value);
const PosList_RecordColType PosList_RecordColType_MIN = PosList_X;
const PosList_RecordColType PosList_RecordColType_MAX = PosList_StayTime;
const int PosList_RecordColType_ARRAYSIZE = PosList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* PosList_RecordColType_descriptor();
inline const ::std::string& PosList_RecordColType_Name(PosList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    PosList_RecordColType_descriptor(), value);
}
inline bool PosList_RecordColType_Parse(
    const ::std::string& name, PosList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PosList_RecordColType>(
    PosList_RecordColType_descriptor(), name, value);
}
enum PlayerViewItem_RecordColType {
  PlayerViewItem_ConfigID = 0,
  PlayerViewItem_EnhanceLevel = 1,
  PlayerViewItem_InlayStone = 2,
  PlayerViewItem_SagecraftLevel = 3
};
bool PlayerViewItem_RecordColType_IsValid(int value);
const PlayerViewItem_RecordColType PlayerViewItem_RecordColType_MIN = PlayerViewItem_ConfigID;
const PlayerViewItem_RecordColType PlayerViewItem_RecordColType_MAX = PlayerViewItem_SagecraftLevel;
const int PlayerViewItem_RecordColType_ARRAYSIZE = PlayerViewItem_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* PlayerViewItem_RecordColType_descriptor();
inline const ::std::string& PlayerViewItem_RecordColType_Name(PlayerViewItem_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    PlayerViewItem_RecordColType_descriptor(), value);
}
inline bool PlayerViewItem_RecordColType_Parse(
    const ::std::string& name, PlayerViewItem_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PlayerViewItem_RecordColType>(
    PlayerViewItem_RecordColType_descriptor(), name, value);
}
enum CommPropertyValue_RecordColType {
  CommPropertyValue_MAXHP = 0,
  CommPropertyValue_MAXMP = 1,
  CommPropertyValue_MAXSP = 2,
  CommPropertyValue_HPREGEN = 3,
  CommPropertyValue_SPREGEN = 4,
  CommPropertyValue_MPREGEN = 5,
  CommPropertyValue_ATK_VALUE = 6,
  CommPropertyValue_DEF_VALUE = 7,
  CommPropertyValue_MOVE_SPEED = 8,
  CommPropertyValue_ATK_SPEED = 9,
  CommPropertyValue_ATK_FIRE = 10,
  CommPropertyValue_ATK_LIGHT = 11,
  CommPropertyValue_ATK_ICE = 12,
  CommPropertyValue_ATK_POISON = 13,
  CommPropertyValue_DEF_FIRE = 14,
  CommPropertyValue_DEF_LIGHT = 15,
  CommPropertyValue_DEF_ICE = 16,
  CommPropertyValue_DEF_POISON = 17,
  CommPropertyValue_DIZZY_GATE = 18,
  CommPropertyValue_MOVE_GATE = 19,
  CommPropertyValue_SKILL_GATE = 20,
  CommPropertyValue_PHYSICAL_GATE = 21,
  CommPropertyValue_MAGIC_GATE = 22,
  CommPropertyValue_BUFF_GATE = 23
};
bool CommPropertyValue_RecordColType_IsValid(int value);
const CommPropertyValue_RecordColType CommPropertyValue_RecordColType_MIN = CommPropertyValue_MAXHP;
const CommPropertyValue_RecordColType CommPropertyValue_RecordColType_MAX = CommPropertyValue_BUFF_GATE;
const int CommPropertyValue_RecordColType_ARRAYSIZE = CommPropertyValue_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CommPropertyValue_RecordColType_descriptor();
inline const ::std::string& CommPropertyValue_RecordColType_Name(CommPropertyValue_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CommPropertyValue_RecordColType_descriptor(), value);
}
inline bool CommPropertyValue_RecordColType_Parse(
    const ::std::string& name, CommPropertyValue_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CommPropertyValue_RecordColType>(
    CommPropertyValue_RecordColType_descriptor(), name, value);
}
enum BagItemList_RecordColType {
  BagItemList_GUID = 0,
  BagItemList_ConfigID = 1,
  BagItemList_ItemCount = 2,
  BagItemList_Bound = 3,
  BagItemList_ExpiredType = 4,
  BagItemList_SlotCount = 5,
  BagItemList_InlayStone1 = 6,
  BagItemList_InlayStone2 = 7,
  BagItemList_InlayStone3 = 8,
  BagItemList_InlayStone4 = 9,
  BagItemList_InlayStone5 = 10,
  BagItemList_InlayStone6 = 11,
  BagItemList_EnhancedLevel = 12,
  BagItemList_SagecraftLevel = 13,
  BagItemList_SagecraftStone = 14,
  BagItemList_RandProperty = 15,
  BagItemList_Date = 16,
  BagItemList_BaseProperty = 17
};
bool BagItemList_RecordColType_IsValid(int value);
const BagItemList_RecordColType BagItemList_RecordColType_MIN = BagItemList_GUID;
const BagItemList_RecordColType BagItemList_RecordColType_MAX = BagItemList_BaseProperty;
const int BagItemList_RecordColType_ARRAYSIZE = BagItemList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BagItemList_RecordColType_descriptor();
inline const ::std::string& BagItemList_RecordColType_Name(BagItemList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BagItemList_RecordColType_descriptor(), value);
}
inline bool BagItemList_RecordColType_Parse(
    const ::std::string& name, BagItemList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BagItemList_RecordColType>(
    BagItemList_RecordColType_descriptor(), name, value);
}
enum EctypeList_RecordColType {
  EctypeList_EctypeID = 0,
  EctypeList_IsPass = 1,
  EctypeList_Star = 2
};
bool EctypeList_RecordColType_IsValid(int value);
const EctypeList_RecordColType EctypeList_RecordColType_MIN = EctypeList_EctypeID;
const EctypeList_RecordColType EctypeList_RecordColType_MAX = EctypeList_Star;
const int EctypeList_RecordColType_ARRAYSIZE = EctypeList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EctypeList_RecordColType_descriptor();
inline const ::std::string& EctypeList_RecordColType_Name(EctypeList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EctypeList_RecordColType_descriptor(), value);
}
inline bool EctypeList_RecordColType_Parse(
    const ::std::string& name, EctypeList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EctypeList_RecordColType>(
    EctypeList_RecordColType_descriptor(), name, value);
}
enum DropItemList_RecordColType {
  DropItemList_MonsterID = 0,
  DropItemList_ItemID = 1,
  DropItemList_ItemCount = 2,
  DropItemList_DrawState = 3
};
bool DropItemList_RecordColType_IsValid(int value);
const DropItemList_RecordColType DropItemList_RecordColType_MIN = DropItemList_MonsterID;
const DropItemList_RecordColType DropItemList_RecordColType_MAX = DropItemList_DrawState;
const int DropItemList_RecordColType_ARRAYSIZE = DropItemList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DropItemList_RecordColType_descriptor();
inline const ::std::string& DropItemList_RecordColType_Name(DropItemList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DropItemList_RecordColType_descriptor(), value);
}
inline bool DropItemList_RecordColType_Parse(
    const ::std::string& name, DropItemList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DropItemList_RecordColType>(
    DropItemList_RecordColType_descriptor(), name, value);
}
enum SkillTable_RecordColType {
  SkillTable_SkillID = 0,
  SkillTable_SkillLevel = 1,
  SkillTable_SkillStone = 2,
  SkillTable_SkillSoulLevel = 3
};
bool SkillTable_RecordColType_IsValid(int value);
const SkillTable_RecordColType SkillTable_RecordColType_MIN = SkillTable_SkillID;
const SkillTable_RecordColType SkillTable_RecordColType_MAX = SkillTable_SkillSoulLevel;
const int SkillTable_RecordColType_ARRAYSIZE = SkillTable_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SkillTable_RecordColType_descriptor();
inline const ::std::string& SkillTable_RecordColType_Name(SkillTable_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SkillTable_RecordColType_descriptor(), value);
}
inline bool SkillTable_RecordColType_Parse(
    const ::std::string& name, SkillTable_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SkillTable_RecordColType>(
    SkillTable_RecordColType_descriptor(), name, value);
}
enum TaskMonsterList_RecordColType {
  TaskMonsterList_MonsterID = 0,
  TaskMonsterList_CurrentKillCount = 1,
  TaskMonsterList_RequireKillCount = 2,
  TaskMonsterList_TaskID = 3
};
bool TaskMonsterList_RecordColType_IsValid(int value);
const TaskMonsterList_RecordColType TaskMonsterList_RecordColType_MIN = TaskMonsterList_MonsterID;
const TaskMonsterList_RecordColType TaskMonsterList_RecordColType_MAX = TaskMonsterList_TaskID;
const int TaskMonsterList_RecordColType_ARRAYSIZE = TaskMonsterList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* TaskMonsterList_RecordColType_descriptor();
inline const ::std::string& TaskMonsterList_RecordColType_Name(TaskMonsterList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    TaskMonsterList_RecordColType_descriptor(), value);
}
inline bool TaskMonsterList_RecordColType_Parse(
    const ::std::string& name, TaskMonsterList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TaskMonsterList_RecordColType>(
    TaskMonsterList_RecordColType_descriptor(), name, value);
}
enum TaskList_RecordColType {
  TaskList_TaskID = 0,
  TaskList_TaskStatus = 1,
  TaskList_Process = 2
};
bool TaskList_RecordColType_IsValid(int value);
const TaskList_RecordColType TaskList_RecordColType_MIN = TaskList_TaskID;
const TaskList_RecordColType TaskList_RecordColType_MAX = TaskList_Process;
const int TaskList_RecordColType_ARRAYSIZE = TaskList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* TaskList_RecordColType_descriptor();
inline const ::std::string& TaskList_RecordColType_Name(TaskList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    TaskList_RecordColType_descriptor(), value);
}
inline bool TaskList_RecordColType_Parse(
    const ::std::string& name, TaskList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TaskList_RecordColType>(
    TaskList_RecordColType_descriptor(), name, value);
}
enum PVPList_RecordColType {
  PVPList_ID = 0,
  PVPList_Name = 1,
  PVPList_Level = 2
};
bool PVPList_RecordColType_IsValid(int value);
const PVPList_RecordColType PVPList_RecordColType_MIN = PVPList_ID;
const PVPList_RecordColType PVPList_RecordColType_MAX = PVPList_Level;
const int PVPList_RecordColType_ARRAYSIZE = PVPList_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* PVPList_RecordColType_descriptor();
inline const ::std::string& PVPList_RecordColType_Name(PVPList_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    PVPList_RecordColType_descriptor(), value);
}
inline bool PVPList_RecordColType_Parse(
    const ::std::string& name, PVPList_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PVPList_RecordColType>(
    PVPList_RecordColType_descriptor(), name, value);
}
enum ChatGroup_RecordColType {
  ChatGroup_ChatType = 0,
  ChatGroup_GroupGUID = 1
};
bool ChatGroup_RecordColType_IsValid(int value);
const ChatGroup_RecordColType ChatGroup_RecordColType_MIN = ChatGroup_ChatType;
const ChatGroup_RecordColType ChatGroup_RecordColType_MAX = ChatGroup_GroupGUID;
const int ChatGroup_RecordColType_ARRAYSIZE = ChatGroup_RecordColType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ChatGroup_RecordColType_descriptor();
inline const ::std::string& ChatGroup_RecordColType_Name(ChatGroup_RecordColType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ChatGroup_RecordColType_descriptor(), value);
}
inline bool ChatGroup_RecordColType_Parse(
    const ::std::string& name, ChatGroup_RecordColType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ChatGroup_RecordColType>(
    ChatGroup_RecordColType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::BuildingList_RecordColType>() {
  return ::NFMsg::BuildingList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::BuildingProduce_RecordColType>() {
  return ::NFMsg::BuildingProduce_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::GuildBoss_RecordColType>() {
  return ::NFMsg::GuildBoss_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::GuildMemberList_RecordColType>() {
  return ::NFMsg::GuildMemberList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::GuildEvent_RecordColType>() {
  return ::NFMsg::GuildEvent_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::GuildHouse_RecordColType>() {
  return ::NFMsg::GuildHouse_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::GuildSkill_RecordColType>() {
  return ::NFMsg::GuildSkill_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::PosList_RecordColType>() {
  return ::NFMsg::PosList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::PlayerViewItem_RecordColType>() {
  return ::NFMsg::PlayerViewItem_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::CommPropertyValue_RecordColType>() {
  return ::NFMsg::CommPropertyValue_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::BagItemList_RecordColType>() {
  return ::NFMsg::BagItemList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EctypeList_RecordColType>() {
  return ::NFMsg::EctypeList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::DropItemList_RecordColType>() {
  return ::NFMsg::DropItemList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::SkillTable_RecordColType>() {
  return ::NFMsg::SkillTable_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::TaskMonsterList_RecordColType>() {
  return ::NFMsg::TaskMonsterList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::TaskList_RecordColType>() {
  return ::NFMsg::TaskList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::PVPList_RecordColType>() {
  return ::NFMsg::PVPList_RecordColType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::ChatGroup_RecordColType>() {
  return ::NFMsg::ChatGroup_RecordColType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NFRecordDefine_2eproto__INCLUDED
