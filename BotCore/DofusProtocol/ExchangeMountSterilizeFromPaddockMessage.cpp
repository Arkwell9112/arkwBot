#include "ExchangeMountSterilizeFromPaddockMessage.h"

void ExchangeMountSterilizeFromPaddockMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountSterilizeFromPaddockMessage(input);
}

void ExchangeMountSterilizeFromPaddockMessage::deserializeAs_ExchangeMountSterilizeFromPaddockMessage(
        ICustomDataInput &input) {
    this->_nameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_sterilizatorFunc(input);
}

void ExchangeMountSterilizeFromPaddockMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void ExchangeMountSterilizeFromPaddockMessage::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void ExchangeMountSterilizeFromPaddockMessage::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void ExchangeMountSterilizeFromPaddockMessage::_sterilizatorFunc(ICustomDataInput &input) {
    this->sterilizator = input.readUTF();
}

