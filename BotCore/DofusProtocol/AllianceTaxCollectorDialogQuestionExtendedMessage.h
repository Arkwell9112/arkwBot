#ifndef ALLIANCETAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE
#define ALLIANCETAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorDialogQuestionExtendedMessage.h"
#include "BasicNamedAllianceInformations.h"
#include "AllianceInformations.h"

class AllianceTaxCollectorDialogQuestionExtendedMessage : public TaxCollectorDialogQuestionExtendedMessage {
public:
    BasicNamedAllianceInformations alliance;
    unsigned int protocolId = 5803;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceTaxCollectorDialogQuestionExtendedMessage(ICustomDataInput &input);
};

#endif