#include "TreasureHuntRequestAnswerMessage.h"

void TreasureHuntRequestAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntRequestAnswerMessage(input);
}

void TreasureHuntRequestAnswerMessage::deserializeAs_TreasureHuntRequestAnswerMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
    this->_resultFunc(input);
}

void TreasureHuntRequestAnswerMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntRequestAnswerMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

