#include "CompassUpdatePartyMemberMessage.h"

void CompassUpdatePartyMemberMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CompassUpdatePartyMemberMessage(input);
}

void CompassUpdatePartyMemberMessage::deserializeAs_CompassUpdatePartyMemberMessage(ICustomDataInput &input) {
    CompassUpdateMessage::deserialize(input);
    this->_memberIdFunc(input);
    this->_activeFunc(input);
}

void CompassUpdatePartyMemberMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

void CompassUpdatePartyMemberMessage::_activeFunc(ICustomDataInput &input) {
    this->active = input.readBoolean();
}

