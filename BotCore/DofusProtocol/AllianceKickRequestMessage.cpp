#include "AllianceKickRequestMessage.h"

void AllianceKickRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceKickRequestMessage(input);
}

void AllianceKickRequestMessage::deserializeAs_AllianceKickRequestMessage(ICustomDataInput &input) {
    this->_kickedIdFunc(input);
}

void AllianceKickRequestMessage::_kickedIdFunc(ICustomDataInput &input) {
    this->kickedId = input.readVarUhInt();

}

