#include "TreasureHuntFlagRequestAnswerMessage.h"

void TreasureHuntFlagRequestAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntFlagRequestAnswerMessage(input);
}

void TreasureHuntFlagRequestAnswerMessage::deserializeAs_TreasureHuntFlagRequestAnswerMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
    this->_resultFunc(input);
    this->_indexFunc(input);
}

void TreasureHuntFlagRequestAnswerMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntFlagRequestAnswerMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

void TreasureHuntFlagRequestAnswerMessage::_indexFunc(ICustomDataInput &input) {
    this->index = input.readByte();

}

