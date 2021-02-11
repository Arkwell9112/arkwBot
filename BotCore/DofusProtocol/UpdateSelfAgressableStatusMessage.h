#ifndef UPDATESELFAGRESSABLESTATUSMESSAGE
#define UPDATESELFAGRESSABLESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class UpdateSelfAgressableStatusMessage : public NetworkInterface {
public:
    unsigned int status = 0;
    unsigned int probationTime = 0;
    unsigned int protocolId = 6611;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateSelfAgressableStatusMessage(ICustomDataInput &input);

    void _statusFunc(ICustomDataInput &input);

    void _probationTimeFunc(ICustomDataInput &input);
};

#endif