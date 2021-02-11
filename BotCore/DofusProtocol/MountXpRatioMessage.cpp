#include "MountXpRatioMessage.h"

void MountXpRatioMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountXpRatioMessage(input);
}

void MountXpRatioMessage::deserializeAs_MountXpRatioMessage(ICustomDataInput &input) {
    this->_ratioFunc(input);
}

void MountXpRatioMessage::_ratioFunc(ICustomDataInput &input) {
    this->ratio = input.readByte();

}

