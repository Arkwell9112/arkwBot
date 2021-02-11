#include "AuthenticationTicketMessage.h"

void AuthenticationTicketMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AuthenticationTicketMessage(input);
}

void AuthenticationTicketMessage::deserializeAs_AuthenticationTicketMessage(ICustomDataInput &input) {
    this->_langFunc(input);
    this->_ticketFunc(input);
}

void AuthenticationTicketMessage::_langFunc(ICustomDataInput &input) {
    this->lang = input.readUTF();
}

void AuthenticationTicketMessage::_ticketFunc(ICustomDataInput &input) {
    this->ticket = input.readUTF();
}

