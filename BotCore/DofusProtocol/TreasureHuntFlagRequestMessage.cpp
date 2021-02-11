#include "TreasureHuntFlagRequestMessage.h"

void TreasureHuntFlagRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntFlagRequestMessage(input);
}

void TreasureHuntFlagRequestMessage::deserializeAs_TreasureHuntFlagRequestMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
    this->_indexFunc(input);
}

void TreasureHuntFlagRequestMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntFlagRequestMessage::_indexFunc(ICustomDataInput &input) {
    this->index = input.readByte();

}

