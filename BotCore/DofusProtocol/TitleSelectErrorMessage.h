#ifndef TITLESELECTERRORMESSAGE
#define TITLESELECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TitleSelectErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 1651;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitleSelectErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif