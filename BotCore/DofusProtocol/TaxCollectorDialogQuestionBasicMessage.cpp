#include "TaxCollectorDialogQuestionBasicMessage.h"

void TaxCollectorDialogQuestionBasicMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorDialogQuestionBasicMessage(input);
}

void
TaxCollectorDialogQuestionBasicMessage::deserializeAs_TaxCollectorDialogQuestionBasicMessage(ICustomDataInput &input) {
    this->guildInfo.deserialize(input);
}

