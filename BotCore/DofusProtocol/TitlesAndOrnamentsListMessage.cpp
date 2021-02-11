#include "TitlesAndOrnamentsListMessage.h"

void TitlesAndOrnamentsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TitlesAndOrnamentsListMessage(input);
}

void TitlesAndOrnamentsListMessage::deserializeAs_TitlesAndOrnamentsListMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _titlesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _titlesLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->titles.push_back(_val1);
    }
    unsigned int _ornamentsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _ornamentsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->ornaments.push_back(_val2);
    }
    this->_activeTitleFunc(input);
    this->_activeOrnamentFunc(input);
}

void TitlesAndOrnamentsListMessage::_titlesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->titles.push_back(_val);
}

void TitlesAndOrnamentsListMessage::_ornamentsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->ornaments.push_back(_val);
}

void TitlesAndOrnamentsListMessage::_activeTitleFunc(ICustomDataInput &input) {
    this->activeTitle = input.readVarUhShort();

}

void TitlesAndOrnamentsListMessage::_activeOrnamentFunc(ICustomDataInput &input) {
    this->activeOrnament = input.readVarUhShort();

}

