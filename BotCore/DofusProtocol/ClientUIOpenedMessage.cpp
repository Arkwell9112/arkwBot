#include "ClientUIOpenedMessage.h"

void ClientUIOpenedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ClientUIOpenedMessage(input);
}

void ClientUIOpenedMessage::deserializeAs_ClientUIOpenedMessage(ICustomDataInput &input) {
    this->_typeFunc(input);
}

void ClientUIOpenedMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

