#include "HavenBagFurnituresRequestMessage.h"

void HavenBagFurnituresRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagFurnituresRequestMessage(input);
}

void HavenBagFurnituresRequestMessage::deserializeAs_HavenBagFurnituresRequestMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    int _val2 = 0;
    unsigned int _val3 = 0;
    unsigned int _cellIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellIdsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->cellIds.push_back(_val1);
    }
    unsigned int _funitureIdsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _funitureIdsLen; _i2++) {
        _val2 = input.readInt();
        this->funitureIds.push_back(_val2);
    }
    unsigned int _orientationsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _orientationsLen; _i3++) {
        _val3 = input.readByte();

        this->orientations.push_back(_val3);
    }
}

void HavenBagFurnituresRequestMessage::_cellIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->cellIds.push_back(_val);
}

void HavenBagFurnituresRequestMessage::_funitureIdsFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->funitureIds.push_back(_val);
}

void HavenBagFurnituresRequestMessage::_orientationsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->orientations.push_back(_val);
}

