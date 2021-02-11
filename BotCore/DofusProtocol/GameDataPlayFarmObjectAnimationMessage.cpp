#include "GameDataPlayFarmObjectAnimationMessage.h"

void GameDataPlayFarmObjectAnimationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameDataPlayFarmObjectAnimationMessage(input);
}

void
GameDataPlayFarmObjectAnimationMessage::deserializeAs_GameDataPlayFarmObjectAnimationMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _cellIdLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellIdLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->cellId.push_back(_val1);
    }
}

void GameDataPlayFarmObjectAnimationMessage::_cellIdFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->cellId.push_back(_val);
}

