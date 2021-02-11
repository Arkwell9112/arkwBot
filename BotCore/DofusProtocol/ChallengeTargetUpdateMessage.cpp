#include "ChallengeTargetUpdateMessage.h"

void ChallengeTargetUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChallengeTargetUpdateMessage(input);
}

void ChallengeTargetUpdateMessage::deserializeAs_ChallengeTargetUpdateMessage(ICustomDataInput &input) {
    this->_challengeIdFunc(input);
    this->_targetIdFunc(input);
}

void ChallengeTargetUpdateMessage::_challengeIdFunc(ICustomDataInput &input) {
    this->challengeId = input.readVarUhShort();

}

void ChallengeTargetUpdateMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

