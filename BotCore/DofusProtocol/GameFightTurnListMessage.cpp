#include "GameFightTurnListMessage.h"

void GameFightTurnListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnListMessage(input);
}

void GameFightTurnListMessage::deserializeAs_GameFightTurnListMessage(ICustomDataInput &input) {
    double _val1 = 0;
    double _val2 = 0;
    unsigned int _idsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input.readDouble();

        this->ids.push_back(_val1);
    }
    unsigned int _deadsIdsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _deadsIdsLen; _i2++) {
        _val2 = input.readDouble();

        this->deadsIds.push_back(_val2);
    }
}

void GameFightTurnListMessage::_idsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->ids.push_back(_val);
}

void GameFightTurnListMessage::_deadsIdsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->deadsIds.push_back(_val);
}

