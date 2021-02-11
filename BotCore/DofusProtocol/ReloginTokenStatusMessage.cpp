#include "ReloginTokenStatusMessage.h"

void ReloginTokenStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ReloginTokenStatusMessage(input);
}

void ReloginTokenStatusMessage::deserializeAs_ReloginTokenStatusMessage(ICustomDataInput &input) {
    int _val2 = 0;
    this->_validTokenFunc(input);
    unsigned int _ticketLen = input.readVarInt();
    for (unsigned int _i2 = 0; _i2 < _ticketLen; _i2++) {
        _val2 = input.readByte();
        this->ticket.push_back(_val2);
    }
}

void ReloginTokenStatusMessage::_validTokenFunc(ICustomDataInput &input) {
    this->validToken = input.readBoolean();
}

void ReloginTokenStatusMessage::_ticketFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->ticket.push_back(_val);
}

