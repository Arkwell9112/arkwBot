#include "TaxCollectorDialogQuestionExtendedMessage.h"

void TaxCollectorDialogQuestionExtendedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorDialogQuestionExtendedMessage(input);
}

void TaxCollectorDialogQuestionExtendedMessage::deserializeAs_TaxCollectorDialogQuestionExtendedMessage(
        ICustomDataInput &input) {
    TaxCollectorDialogQuestionBasicMessage::deserialize(input);
    this->_maxPodsFunc(input);
    this->_prospectingFunc(input);
    this->_wisdomFunc(input);
    this->_taxCollectorsCountFunc(input);
    this->_taxCollectorAttackFunc(input);
    this->_kamasFunc(input);
    this->_experienceFunc(input);
    this->_podsFunc(input);
    this->_itemsValueFunc(input);
}

void TaxCollectorDialogQuestionExtendedMessage::_maxPodsFunc(ICustomDataInput &input) {
    this->maxPods = input.readVarUhShort();

}

void TaxCollectorDialogQuestionExtendedMessage::_prospectingFunc(ICustomDataInput &input) {
    this->prospecting = input.readVarUhShort();

}

void TaxCollectorDialogQuestionExtendedMessage::_wisdomFunc(ICustomDataInput &input) {
    this->wisdom = input.readVarUhShort();

}

void TaxCollectorDialogQuestionExtendedMessage::_taxCollectorsCountFunc(ICustomDataInput &input) {
    this->taxCollectorsCount = input.readByte();

}

void TaxCollectorDialogQuestionExtendedMessage::_taxCollectorAttackFunc(ICustomDataInput &input) {
    this->taxCollectorAttack = input.readInt();
}

void TaxCollectorDialogQuestionExtendedMessage::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

void TaxCollectorDialogQuestionExtendedMessage::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhLong();

}

void TaxCollectorDialogQuestionExtendedMessage::_podsFunc(ICustomDataInput &input) {
    this->pods = input.readVarUhInt();

}

void TaxCollectorDialogQuestionExtendedMessage::_itemsValueFunc(ICustomDataInput &input) {
    this->itemsValue = input.readVarUhLong();

}

