#include "MountInformationRequestMessage.h"

void MountInformationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountInformationRequestMessage(input);
}

void MountInformationRequestMessage::deserializeAs_MountInformationRequestMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_timeFunc(input);
}

void MountInformationRequestMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void MountInformationRequestMessage::_timeFunc(ICustomDataInput &input) {
    this->time = input.readDouble();

}

