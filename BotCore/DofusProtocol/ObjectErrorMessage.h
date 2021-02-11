#ifndef OBJECTERRORMESSAGE
#define OBJECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectErrorMessage : public NetworkInterface {
public:
    int reason = 0;
    unsigned int protocolId = 9537;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif