#include "GameMapMovementRequestMessage.h"

void GameMapMovementRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapMovementRequestMessage(input);
}

void GameMapMovementRequestMessage::deserializeAs_GameMapMovementRequestMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _keyMovementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _keyMovementsLen; _i1++) {
        _val1 = input.readShort();

        this->keyMovements.push_back(_val1);
    }
    this->_mapIdFunc(input);
}

void GameMapMovementRequestMessage::_keyMovementsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readShort();

    this->keyMovements.push_back(_val);
}

void GameMapMovementRequestMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}