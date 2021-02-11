#include "GameRolePlayArenaInvitationCandidatesAnswerMessage.h"

void GameRolePlayArenaInvitationCandidatesAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaInvitationCandidatesAnswerMessage(input);
}

void
GameRolePlayArenaInvitationCandidatesAnswerMessage::deserializeAs_GameRolePlayArenaInvitationCandidatesAnswerMessage(
        ICustomDataInput &input) {
    LeagueFriendInformations _item1;
    unsigned int _candidatesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _candidatesLen; _i1++) {
        _item1.deserialize(input);
        this->candidates.push_back(_item1);
    }
}

void GameRolePlayArenaInvitationCandidatesAnswerMessage::_candidatesFunc(ICustomDataInput &input) {
    LeagueFriendInformations _item;
    _item.deserialize(input);
    this->candidates.push_back(_item);
}

