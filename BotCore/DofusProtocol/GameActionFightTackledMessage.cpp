#include "GameActionFightTackledMessage.h"

void GameActionFightTackledMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightTackledMessage(input);
}

void GameActionFightTackledMessage::deserializeAs_GameActionFightTackledMessage(ICustomDataInput &input) {
    double _val1 = 0;
    AbstractGameActionMessage::deserialize(input);
    unsigned int _tacklersIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _tacklersIdsLen; _i1++) {
        _val1 = input.readDouble();

        this->tacklersIds.push_back(_val1);
    }
}

void GameActionFightTackledMessage::_tacklersIdsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->tacklersIds.push_back(_val);
}

