#include "MountInformationInPaddockRequestMessage.h"

void MountInformationInPaddockRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountInformationInPaddockRequestMessage(input);
}

void MountInformationInPaddockRequestMessage::deserializeAs_MountInformationInPaddockRequestMessage(
        ICustomDataInput &input) {
    this->_mapRideIdFunc(input);
}

void MountInformationInPaddockRequestMessage::_mapRideIdFunc(ICustomDataInput &input) {
    this->mapRideId = input.readVarInt();
}

