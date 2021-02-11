#include "FollowQuestObjectiveRequestMessage.h"

void FollowQuestObjectiveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FollowQuestObjectiveRequestMessage(input);
}

void FollowQuestObjectiveRequestMessage::deserializeAs_FollowQuestObjectiveRequestMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void FollowQuestObjectiveRequestMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

void FollowQuestObjectiveRequestMessage::_objectiveIdFunc(ICustomDataInput &input) {
    this->objectiveId = input.readShort();
}

