#include "HavenBagPackListMessage.h"

void HavenBagPackListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagPackListMessage(input);
}

void HavenBagPackListMessage::deserializeAs_HavenBagPackListMessage(ICustomDataInput &input) {
    int _val1 = 0;
    unsigned int _packIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _packIdsLen; _i1++) {
        _val1 = input.readByte();
        this->packIds.push_back(_val1);
    }
}

void HavenBagPackListMessage::_packIdsFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->packIds.push_back(_val);
}

