#include "TreasureHuntGiveUpRequestMessage.h"

void TreasureHuntGiveUpRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntGiveUpRequestMessage(input);
}

void TreasureHuntGiveUpRequestMessage::deserializeAs_TreasureHuntGiveUpRequestMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
}

void TreasureHuntGiveUpRequestMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

