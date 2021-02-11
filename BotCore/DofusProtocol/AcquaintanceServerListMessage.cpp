#include "AcquaintanceServerListMessage.h"

void AcquaintanceServerListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintanceServerListMessage(input);
}

void AcquaintanceServerListMessage::deserializeAs_AcquaintanceServerListMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _serversLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _serversLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->servers.push_back(_val1);
    }
}

void AcquaintanceServerListMessage::_serversFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->servers.push_back(_val);
}

