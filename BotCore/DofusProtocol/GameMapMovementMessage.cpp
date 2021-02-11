#include "GameMapMovementMessage.h"

void GameMapMovementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapMovementMessage(input);
}

void GameMapMovementMessage::deserializeAs_GameMapMovementMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _keyMovementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _keyMovementsLen; _i1++) {
        _val1 = input.readShort();

        this->keyMovements.push_back(_val1);
    }
    this->_forcedDirectionFunc(input);
    this->_actorIdFunc(input);
}

void GameMapMovementMessage::_keyMovementsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readShort();

    this->keyMovements.push_back(_val);
}

void GameMapMovementMessage::_forcedDirectionFunc(ICustomDataInput &input) {
    this->forcedDirection = input.readShort();
}

void GameMapMovementMessage::_actorIdFunc(ICustomDataInput &input) {
    this->actorId = input.readDouble();

}

