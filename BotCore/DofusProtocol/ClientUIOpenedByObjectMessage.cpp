#include "ClientUIOpenedByObjectMessage.h"

void ClientUIOpenedByObjectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ClientUIOpenedByObjectMessage(input);
}

void ClientUIOpenedByObjectMessage::deserializeAs_ClientUIOpenedByObjectMessage(ICustomDataInput &input) {
    ClientUIOpenedMessage::deserialize(input);
    this->_uidFunc(input);
}

void ClientUIOpenedByObjectMessage::_uidFunc(ICustomDataInput &input) {
    this->uid = input.readVarUhInt();

}

