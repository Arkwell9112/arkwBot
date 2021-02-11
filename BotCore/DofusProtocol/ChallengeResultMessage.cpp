#include "ChallengeResultMessage.h"

void ChallengeResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChallengeResultMessage(input);
}

void ChallengeResultMessage::deserializeAs_ChallengeResultMessage(ICustomDataInput &input) {
    this->_challengeIdFunc(input);
    this->_successFunc(input);
}

void ChallengeResultMessage::_challengeIdFunc(ICustomDataInput &input) {
    this->challengeId = input.readVarUhShort();

}

void ChallengeResultMessage::_successFunc(ICustomDataInput &input) {
    this->success = input.readBoolean();
}

