#include "AllianceInsiderPrismInformation.h"

void AllianceInsiderPrismInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInsiderPrismInformation(input);
}

void AllianceInsiderPrismInformation::deserializeAs_AllianceInsiderPrismInformation(ICustomDataInput &input) {
    ObjectItem _item5;
    PrismInformation::deserialize(input);
    this->_lastTimeSlotModificationDateFunc(input);
    this->_lastTimeSlotModificationAuthorGuildIdFunc(input);
    this->_lastTimeSlotModificationAuthorIdFunc(input);
    this->_lastTimeSlotModificationAuthorNameFunc(input);
    unsigned int _modulesObjectsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _modulesObjectsLen; _i5++) {
        _item5.deserialize(input);
        this->modulesObjects.push_back(_item5);
    }
}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationDateFunc(ICustomDataInput &input) {
    this->lastTimeSlotModificationDate = input.readInt();

}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationAuthorGuildIdFunc(ICustomDataInput &input) {
    this->lastTimeSlotModificationAuthorGuildId = input.readVarUhInt();

}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationAuthorIdFunc(ICustomDataInput &input) {
    this->lastTimeSlotModificationAuthorId = input.readVarUhLong();

}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationAuthorNameFunc(ICustomDataInput &input) {
    this->lastTimeSlotModificationAuthorName = input.readUTF();
}

void AllianceInsiderPrismInformation::_modulesObjectsFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->modulesObjects.push_back(_item);
}

