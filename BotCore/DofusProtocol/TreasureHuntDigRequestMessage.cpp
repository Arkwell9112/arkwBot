#include "TreasureHuntDigRequestMessage.h"

void TreasureHuntDigRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntDigRequestMessage(input);
}

void TreasureHuntDigRequestMessage::deserializeAs_TreasureHuntDigRequestMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
}

void TreasureHuntDigRequestMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

