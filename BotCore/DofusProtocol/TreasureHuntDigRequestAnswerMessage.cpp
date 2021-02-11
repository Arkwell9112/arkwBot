#include "TreasureHuntDigRequestAnswerMessage.h"

void TreasureHuntDigRequestAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntDigRequestAnswerMessage(input);
}

void TreasureHuntDigRequestAnswerMessage::deserializeAs_TreasureHuntDigRequestAnswerMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
    this->_resultFunc(input);
}

void TreasureHuntDigRequestAnswerMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntDigRequestAnswerMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

