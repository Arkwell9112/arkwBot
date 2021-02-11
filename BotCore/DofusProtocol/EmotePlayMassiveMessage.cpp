#include "EmotePlayMassiveMessage.h"

void EmotePlayMassiveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmotePlayMassiveMessage(input);
}

void EmotePlayMassiveMessage::deserializeAs_EmotePlayMassiveMessage(ICustomDataInput &input) {
    double _val1 = 0;
    EmotePlayAbstractMessage::deserialize(input);
    unsigned int _actorIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _actorIdsLen; _i1++) {
        _val1 = input.readDouble();

        this->actorIds.push_back(_val1);
    }
}

void EmotePlayMassiveMessage::_actorIdsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->actorIds.push_back(_val);
}

