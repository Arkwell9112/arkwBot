#include "AllianceJoinedMessage.h"

void AllianceJoinedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceJoinedMessage(input);
}

void AllianceJoinedMessage::deserializeAs_AllianceJoinedMessage(ICustomDataInput &input) {
    this->allianceInfo.deserialize(input);
    this->_enabledFunc(input);
    this->_leadingGuildIdFunc(input);
}

void AllianceJoinedMessage::_enabledFunc(ICustomDataInput &input) {
    this->enabled = input.readBoolean();
}

void AllianceJoinedMessage::_leadingGuildIdFunc(ICustomDataInput &input) {
    this->leadingGuildId = input.readVarUhInt();

}

