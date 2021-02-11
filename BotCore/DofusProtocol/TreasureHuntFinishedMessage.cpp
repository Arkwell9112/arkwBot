#include "TreasureHuntFinishedMessage.h"

void TreasureHuntFinishedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntFinishedMessage(input);
}

void TreasureHuntFinishedMessage::deserializeAs_TreasureHuntFinishedMessage(ICustomDataInput &input) {
    this->_questTypeFunc(input);
}

void TreasureHuntFinishedMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

