#include "ExchangeMountsTakenFromPaddockMessage.h"

void ExchangeMountsTakenFromPaddockMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountsTakenFromPaddockMessage(input);
}

void
ExchangeMountsTakenFromPaddockMessage::deserializeAs_ExchangeMountsTakenFromPaddockMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_ownernameFunc(input);
}

void ExchangeMountsTakenFromPaddockMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void ExchangeMountsTakenFromPaddockMessage::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void ExchangeMountsTakenFromPaddockMessage::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void ExchangeMountsTakenFromPaddockMessage::_ownernameFunc(ICustomDataInput &input) {
    this->ownername = input.readUTF();
}

