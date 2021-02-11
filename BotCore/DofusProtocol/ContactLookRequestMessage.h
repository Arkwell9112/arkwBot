#ifndef CONTACTLOOKREQUESTMESSAGE
#define CONTACTLOOKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ContactLookRequestMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    unsigned int contactType = 0;
    unsigned int protocolId = 1804;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ContactLookRequestMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);

    void _contactTypeFunc(ICustomDataInput &input);
};

#endif