#include "QuestObjectiveValidationMessage.h"

void QuestObjectiveValidationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestObjectiveValidationMessage(input);
}

void QuestObjectiveValidationMessage::deserializeAs_QuestObjectiveValidationMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void QuestObjectiveValidationMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

void QuestObjectiveValidationMessage::_objectiveIdFunc(ICustomDataInput &input) {
    this->objectiveId = input.readVarUhShort();

}

