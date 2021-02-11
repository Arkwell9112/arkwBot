#ifndef CONTACTADDFAILUREMESSAGE
#define CONTACTADDFAILUREMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ContactAddFailureMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 676;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ContactAddFailureMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif