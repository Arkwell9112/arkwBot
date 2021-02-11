#include "AbstractCharacterInformation.h"

void AbstractCharacterInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractCharacterInformation(input);
}

void AbstractCharacterInformation::deserializeAs_AbstractCharacterInformation(ICustomDataInput &input) {
    this->_idFunc(input);
}

void AbstractCharacterInformation::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

