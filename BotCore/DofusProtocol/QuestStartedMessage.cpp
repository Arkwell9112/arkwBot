#include "QuestStartedMessage.h"

void QuestStartedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestStartedMessage(input);
}

void QuestStartedMessage::deserializeAs_QuestStartedMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
}

void QuestStartedMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

