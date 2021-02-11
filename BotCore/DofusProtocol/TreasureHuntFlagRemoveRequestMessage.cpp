#include "TreasureHuntFlagRemoveRequestMessage.h"

void TreasureHuntFlagRemoveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntFlagRemoveRequestMessage(input);
}

void TreasureHuntFlagRemoveRequestMessage::deserializeAs_TreasureHuntFlagRemoveRequestMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
    this->_indexFunc(input);
}

void TreasureHuntFlagRemoveRequestMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntFlagRemoveRequestMessage::_indexFunc(ICustomDataInput &input) {
    this->index = input.readByte();

}

