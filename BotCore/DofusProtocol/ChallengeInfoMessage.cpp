#include "ChallengeInfoMessage.h"

void ChallengeInfoMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChallengeInfoMessage(input);
}

void ChallengeInfoMessage::deserializeAs_ChallengeInfoMessage(ICustomDataInput &input) {
    this->_challengeIdFunc(input);
    this->_targetIdFunc(input);
    this->_xpBonusFunc(input);
    this->_dropBonusFunc(input);
}

void ChallengeInfoMessage::_challengeIdFunc(ICustomDataInput &input) {
    this->challengeId = input.readVarUhShort();

}

void ChallengeInfoMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void ChallengeInfoMessage::_xpBonusFunc(ICustomDataInput &input) {
    this->xpBonus = input.readVarUhInt();

}

void ChallengeInfoMessage::_dropBonusFunc(ICustomDataInput &input) {
    this->dropBonus = input.readVarUhInt();

}

