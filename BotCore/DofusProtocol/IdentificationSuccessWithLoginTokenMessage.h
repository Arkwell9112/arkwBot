#ifndef IDENTIFICATIONSUCCESSWITHLOGINTOKENMESSAGE
#define IDENTIFICATIONSUCCESSWITHLOGINTOKENMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "IdentificationSuccessMessage.h"

class IdentificationSuccessWithLoginTokenMessage : public IdentificationSuccessMessage {
public:
    std::string loginToken;
    unsigned int protocolId = 5639;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationSuccessWithLoginTokenMessage(ICustomDataInput &input);

    void _loginTokenFunc(ICustomDataInput &input);
};

#endif