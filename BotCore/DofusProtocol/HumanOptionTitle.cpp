#include "HumanOptionTitle.h"

void HumanOptionTitle::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionTitle(input);
}

void HumanOptionTitle::deserializeAs_HumanOptionTitle(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->_titleIdFunc(input);
    this->_titleParamFunc(input);
}

void HumanOptionTitle::_titleIdFunc(ICustomDataInput &input) {
    this->titleId = input.readVarUhShort();

}

void HumanOptionTitle::_titleParamFunc(ICustomDataInput &input) {
    this->titleParam = input.readUTF();
}

