#ifndef TAXCOLLECTORDIALOGQUESTIONBASICMESSAGE
#define TAXCOLLECTORDIALOGQUESTIONBASICMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"

class TaxCollectorDialogQuestionBasicMessage : public NetworkInterface {
public:
    BasicGuildInformations guildInfo;
    unsigned int protocolId = 2976;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorDialogQuestionBasicMessage(ICustomDataInput &input);
};

#endif