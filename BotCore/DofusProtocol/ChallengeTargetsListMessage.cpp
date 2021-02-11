#include "ChallengeTargetsListMessage.h"

void ChallengeTargetsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChallengeTargetsListMessage(input);
}

void ChallengeTargetsListMessage::deserializeAs_ChallengeTargetsListMessage(ICustomDataInput &input) {
    double _val1 = 0;
    int _val2 = 0;
    unsigned int _targetIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _targetIdsLen; _i1++) {
        _val1 = input.readDouble();

        this->targetIds.push_back(_val1);
    }
    unsigned int _targetCellsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _targetCellsLen; _i2++) {
        _val2 = input.readShort();

        this->targetCells.push_back(_val2);
    }
}

void ChallengeTargetsListMessage::_targetIdsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->targetIds.push_back(_val);
}

void ChallengeTargetsListMessage::_targetCellsFunc(ICustomDataInput &input) {
    int _val = input.readShort();

    this->targetCells.push_back(_val);
}

