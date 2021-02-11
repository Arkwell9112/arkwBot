#include "UpdateMapPlayersAgressableStatusMessage.h"

void UpdateMapPlayersAgressableStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateMapPlayersAgressableStatusMessage(input);
}

void UpdateMapPlayersAgressableStatusMessage::deserializeAs_UpdateMapPlayersAgressableStatusMessage(
        ICustomDataInput &input) {
    double _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _playerIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _playerIdsLen; _i1++) {
        _val1 = input.readVarUhLong();

        this->playerIds.push_back(_val1);
    }
    unsigned int _enableLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _enableLen; _i2++) {
        _val2 = input.readByte();

        this->enable.push_back(_val2);
    }
}

void UpdateMapPlayersAgressableStatusMessage::_playerIdsFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->playerIds.push_back(_val);
}

void UpdateMapPlayersAgressableStatusMessage::_enableFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->enable.push_back(_val);
}

