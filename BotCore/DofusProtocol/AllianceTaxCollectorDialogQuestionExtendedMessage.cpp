#include "AllianceTaxCollectorDialogQuestionExtendedMessage.h"

void AllianceTaxCollectorDialogQuestionExtendedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceTaxCollectorDialogQuestionExtendedMessage(input);
}

void AllianceTaxCollectorDialogQuestionExtendedMessage::deserializeAs_AllianceTaxCollectorDialogQuestionExtendedMessage(
        ICustomDataInput &input) {
    TaxCollectorDialogQuestionExtendedMessage::deserialize(input);
    this->alliance.deserialize(input);
}

