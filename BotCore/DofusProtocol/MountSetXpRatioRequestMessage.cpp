#include "MountSetXpRatioRequestMessage.h"

void MountSetXpRatioRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountSetXpRatioRequestMessage(input);
}

void MountSetXpRatioRequestMessage::deserializeAs_MountSetXpRatioRequestMessage(ICustomDataInput &input) {
    this->_xpRatioFunc(input);
}

void MountSetXpRatioRequestMessage::_xpRatioFunc(ICustomDataInput &input) {
    this->xpRatio = input.readByte();

}

