#include "NamedPartyTeamWithOutcome.h"

void NamedPartyTeamWithOutcome::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NamedPartyTeamWithOutcome(input);
}

void NamedPartyTeamWithOutcome::deserializeAs_NamedPartyTeamWithOutcome(ICustomDataInput &input) {
    this->team.deserialize(input);
    this->_outcomeFunc(input);
}

void NamedPartyTeamWithOutcome::_outcomeFunc(ICustomDataInput &input) {
    this->outcome = input.readVarUhShort();

}

