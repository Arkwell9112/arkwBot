#include "BreachInvitationRequestMessage.h"

void BreachInvitationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachInvitationRequestMessage(input);
}

void BreachInvitationRequestMessage::deserializeAs_BreachInvitationRequestMessage(ICustomDataInput &input) {
    double _val1 = 0;
    unsigned int _guestsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _guestsLen; _i1++) {
        _val1 = input.readVarUhLong();

        this->guests.push_back(_val1);
    }
}

void BreachInvitationRequestMessage::_guestsFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->guests.push_back(_val);
}

