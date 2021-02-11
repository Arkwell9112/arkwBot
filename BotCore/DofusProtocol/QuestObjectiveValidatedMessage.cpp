#include "QuestObjectiveValidatedMessage.h"

void QuestObjectiveValidatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestObjectiveValidatedMessage(input);
}

void QuestObjectiveValidatedMessage::deserializeAs_QuestObjectiveValidatedMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void QuestObjectiveValidatedMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

void QuestObjectiveValidatedMessage::_objectiveIdFunc(ICustomDataInput &input) {
    this->objectiveId = input.readVarUhShort();

}

