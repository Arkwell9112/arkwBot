#include "AnomalySubareaInformationResponseMessage.h"

void AnomalySubareaInformationResponseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AnomalySubareaInformationResponseMessage(input);
}

void AnomalySubareaInformationResponseMessage::deserializeAs_AnomalySubareaInformationResponseMessage(
        ICustomDataInput &input) {
    AnomalySubareaInformation _item1;
    unsigned int _subareasLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _subareasLen; _i1++) {
        _item1.deserialize(input);
        this->subareas.push_back(_item1);
    }
}

void AnomalySubareaInformationResponseMessage::_subareasFunc(ICustomDataInput &input) {
    AnomalySubareaInformation _item;
    _item.deserialize(input);
    this->subareas.push_back(_item);
}

