#include "QuestStepStartedMessage.h"

void QuestStepStartedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestStepStartedMessage(input);
}

void QuestStepStartedMessage::deserializeAs_QuestStepStartedMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
    this->_stepIdFunc(input);
}

void QuestStepStartedMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

void QuestStepStartedMessage::_stepIdFunc(ICustomDataInput &input) {
    this->stepId = input.readVarUhShort();

}

