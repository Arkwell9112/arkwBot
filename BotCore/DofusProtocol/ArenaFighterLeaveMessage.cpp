#include "ArenaFighterLeaveMessage.h"

void ArenaFighterLeaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ArenaFighterLeaveMessage(input);
}

void ArenaFighterLeaveMessage::deserializeAs_ArenaFighterLeaveMessage(ICustomDataInput &input) {
    this->leaver.deserialize(input);
}

