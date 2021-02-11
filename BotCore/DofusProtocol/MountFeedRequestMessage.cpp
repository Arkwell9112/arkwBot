#include "MountFeedRequestMessage.h"

void MountFeedRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountFeedRequestMessage(input);
}

void MountFeedRequestMessage::deserializeAs_MountFeedRequestMessage(ICustomDataInput &input) {
    this->_mountUidFunc(input);
    this->_mountLocationFunc(input);
    this->_mountFoodUidFunc(input);
    this->_quantityFunc(input);
}

void MountFeedRequestMessage::_mountUidFunc(ICustomDataInput &input) {
    this->mountUid = input.readVarUhInt();

}

void MountFeedRequestMessage::_mountLocationFunc(ICustomDataInput &input) {
    this->mountLocation = input.readByte();
}

void MountFeedRequestMessage::_mountFoodUidFunc(ICustomDataInput &input) {
    this->mountFoodUid = input.readVarUhInt();

}

void MountFeedRequestMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

