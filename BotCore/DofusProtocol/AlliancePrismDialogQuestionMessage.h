#ifndef ALLIANCEPRISMDIALOGQUESTIONMESSAGE
#define ALLIANCEPRISMDIALOGQUESTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlliancePrismDialogQuestionMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3007;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlliancePrismDialogQuestionMessage(ICustomDataInput &input);
};

#endif