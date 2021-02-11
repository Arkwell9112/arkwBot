#ifndef IDENTIFICATIONACCOUNTFORCEMESSAGE
#define IDENTIFICATIONACCOUNTFORCEMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "IdentificationMessage.h"

class IdentificationAccountForceMessage : public IdentificationMessage {
public:
    std::string forcedAccountLogin;
    unsigned int protocolId = 6812;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationAccountForceMessage(ICustomDataInput &input);

    void _forcedAccountLoginFunc(ICustomDataInput &input);
};

#endif