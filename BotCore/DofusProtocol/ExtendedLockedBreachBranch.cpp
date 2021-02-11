#include "ExtendedLockedBreachBranch.h"

void ExtendedLockedBreachBranch::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExtendedLockedBreachBranch(input);
}

void ExtendedLockedBreachBranch::deserializeAs_ExtendedLockedBreachBranch(ICustomDataInput &input) {
    ExtendedBreachBranch::deserialize(input);
    this->_unlockPriceFunc(input);
}

void ExtendedLockedBreachBranch::_unlockPriceFunc(ICustomDataInput &input) {
    this->unlockPrice = input.readVarUhInt();

}

