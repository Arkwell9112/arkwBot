#ifndef ERRORMAPNOTFOUNDMESSAGE
#define ERRORMAPNOTFOUNDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ErrorMapNotFoundMessage : public NetworkInterface {
public:
    double mapId = 0;
    unsigned int protocolId = 8976;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ErrorMapNotFoundMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif