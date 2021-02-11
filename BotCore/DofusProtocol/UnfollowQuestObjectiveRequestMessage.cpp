#include "UnfollowQuestObjectiveRequestMessage.h"

void UnfollowQuestObjectiveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UnfollowQuestObjectiveRequestMessage(input);
}

void UnfollowQuestObjectiveRequestMessage::deserializeAs_UnfollowQuestObjectiveRequestMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void UnfollowQuestObjectiveRequestMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

void UnfollowQuestObjectiveRequestMessage::_objectiveIdFunc(ICustomDataInput &input) {
    this->objectiveId = input.readShort();
}

