#include "QuestStepValidatedMessage.h"

void QuestStepValidatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestStepValidatedMessage(input);
}

void QuestStepValidatedMessage::deserializeAs_QuestStepValidatedMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
    this->_stepIdFunc(input);
}

void QuestStepValidatedMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

void QuestStepValidatedMessage::_stepIdFunc(ICustomDataInput &input) {
    this->stepId = input.readVarUhShort();

}

