#include "GuildChangeMemberParametersMessage.h"

void GuildChangeMemberParametersMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildChangeMemberParametersMessage(input);
}

void GuildChangeMemberParametersMessage::deserializeAs_GuildChangeMemberParametersMessage(ICustomDataInput &input) {
    this->_memberIdFunc(input);
    this->_rankFunc(input);
    this->_experienceGivenPercentFunc(input);
    this->_rightsFunc(input);
}

void GuildChangeMemberParametersMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

void GuildChangeMemberParametersMessage::_rankFunc(ICustomDataInput &input) {
    this->rank = input.readVarUhShort();

}

void GuildChangeMemberParametersMessage::_experienceGivenPercentFunc(ICustomDataInput &input) {
    this->experienceGivenPercent = input.readByte();

}

void GuildChangeMemberParametersMessage::_rightsFunc(ICustomDataInput &input) {
    this->rights = input.readVarUhInt();

}

