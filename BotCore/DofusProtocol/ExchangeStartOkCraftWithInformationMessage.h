#ifndef EXCHANGESTARTOKCRAFTWITHINFORMATIONMESSAGE
#define EXCHANGESTARTOKCRAFTWITHINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeStartOkCraftMessage.h"

class ExchangeStartOkCraftWithInformationMessage : public ExchangeStartOkCraftMessage {
public:
    unsigned int skillId = 0;
    unsigned int protocolId = 8555;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkCraftWithInformationMessage(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);
};

#endif