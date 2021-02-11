#include "BreachCharactersMessage.h"

void BreachCharactersMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachCharactersMessage(input);
}

void BreachCharactersMessage::deserializeAs_BreachCharactersMessage(ICustomDataInput &input) {
    double _val1 = 0;
    unsigned int _charactersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _charactersLen; _i1++) {
        _val1 = input.readVarUhLong();

        this->characters.push_back(_val1);
    }
}

void BreachCharactersMessage::_charactersFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->characters.push_back(_val);
}

