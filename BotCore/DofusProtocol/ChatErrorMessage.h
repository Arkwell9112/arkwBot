#ifndef CHATERRORMESSAGE
#define CHATERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChatErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 2032;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif