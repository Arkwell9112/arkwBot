#ifndef ZAAPRESPAWNSAVEREQUESTMESSAGE
#define ZAAPRESPAWNSAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ZaapRespawnSaveRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4584;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ZaapRespawnSaveRequestMessage(ICustomDataInput &input);
};

#endif