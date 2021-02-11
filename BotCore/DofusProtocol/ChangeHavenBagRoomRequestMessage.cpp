#include "ChangeHavenBagRoomRequestMessage.h"

void ChangeHavenBagRoomRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChangeHavenBagRoomRequestMessage(input);
}

void ChangeHavenBagRoomRequestMessage::deserializeAs_ChangeHavenBagRoomRequestMessage(ICustomDataInput &input) {
    this->_roomIdFunc(input);
}

void ChangeHavenBagRoomRequestMessage::_roomIdFunc(ICustomDataInput &input) {
    this->roomId = input.readByte();

}

