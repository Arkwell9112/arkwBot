#include "HumanOptionAlliance.h"

void HumanOptionAlliance::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionAlliance(input);
}

void HumanOptionAlliance::deserializeAs_HumanOptionAlliance(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->allianceInformations.deserialize(input);
    this->_aggressableFunc(input);
}

void HumanOptionAlliance::_aggressableFunc(ICustomDataInput &input) {
    this->aggressable = input.readByte();

}

