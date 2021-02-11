#ifndef CONTACTLOOKERRORMESSAGE
#define CONTACTLOOKERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ContactLookErrorMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    unsigned int protocolId = 1562;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ContactLookErrorMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);
};

#endif