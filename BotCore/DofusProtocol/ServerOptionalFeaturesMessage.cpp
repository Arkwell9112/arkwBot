#include "ServerOptionalFeaturesMessage.h"

void ServerOptionalFeaturesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerOptionalFeaturesMessage(input);
}

void ServerOptionalFeaturesMessage::deserializeAs_ServerOptionalFeaturesMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _featuresLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _featuresLen; _i1++) {
        _val1 = input.readByte();

        this->features.push_back(_val1);
    }
}

void ServerOptionalFeaturesMessage::_featuresFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->features.push_back(_val);
}

