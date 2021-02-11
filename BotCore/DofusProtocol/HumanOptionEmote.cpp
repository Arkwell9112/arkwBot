#include "HumanOptionEmote.h"

void HumanOptionEmote::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionEmote(input);
}

void HumanOptionEmote::deserializeAs_HumanOptionEmote(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->_emoteIdFunc(input);
    this->_emoteStartTimeFunc(input);
}

void HumanOptionEmote::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

void HumanOptionEmote::_emoteStartTimeFunc(ICustomDataInput &input) {
    this->emoteStartTime = input.readDouble();

}

