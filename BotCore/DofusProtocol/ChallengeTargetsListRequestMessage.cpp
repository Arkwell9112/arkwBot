#include "ChallengeTargetsListRequestMessage.h"

void ChallengeTargetsListRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChallengeTargetsListRequestMessage(input);
}

void ChallengeTargetsListRequestMessage::deserializeAs_ChallengeTargetsListRequestMessage(ICustomDataInput &input) {
    this->_challengeIdFunc(input);
}

void ChallengeTargetsListRequestMessage::_challengeIdFunc(ICustomDataInput &input) {
    this->challengeId = input.readVarUhShort();

}

