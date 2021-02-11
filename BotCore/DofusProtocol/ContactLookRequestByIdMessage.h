#ifndef CONTACTLOOKREQUESTBYIDMESSAGE
#define CONTACTLOOKREQUESTBYIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ContactLookRequestMessage.h"

class ContactLookRequestByIdMessage : public ContactLookRequestMessage {
public:
    double playerId = 0;
    unsigned int protocolId = 2735;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ContactLookRequestByIdMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif