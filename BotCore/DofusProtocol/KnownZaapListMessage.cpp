#include "KnownZaapListMessage.h"

void KnownZaapListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_KnownZaapListMessage(input);
}

void KnownZaapListMessage::deserializeAs_KnownZaapListMessage(ICustomDataInput &input) {
    double _val1 = 0;
    unsigned int _destinationsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _destinationsLen; _i1++) {
        _val1 = input.readDouble();

        this->destinations.push_back(_val1);
    }
}

void KnownZaapListMessage::_destinationsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->destinations.push_back(_val);
}

