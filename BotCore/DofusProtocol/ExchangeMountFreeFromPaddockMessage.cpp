#include "ExchangeMountFreeFromPaddockMessage.h"

void ExchangeMountFreeFromPaddockMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountFreeFromPaddockMessage(input);
}

void ExchangeMountFreeFromPaddockMessage::deserializeAs_ExchangeMountFreeFromPaddockMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_liberatorFunc(input);
}

void ExchangeMountFreeFromPaddockMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void ExchangeMountFreeFromPaddockMessage::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void ExchangeMountFreeFromPaddockMessage::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void ExchangeMountFreeFromPaddockMessage::_liberatorFunc(ICustomDataInput &input) {
    this->liberator = input.readUTF();
}

