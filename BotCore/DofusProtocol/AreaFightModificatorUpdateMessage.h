#ifndef AREAFIGHTMODIFICATORUPDATEMESSAGE
#define AREAFIGHTMODIFICATORUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AreaFightModificatorUpdateMessage : public NetworkInterface {
public:
    int spellPairId = 0;
    unsigned int protocolId = 9358;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AreaFightModificatorUpdateMessage(ICustomDataInput &input);

    void _spellPairIdFunc(ICustomDataInput &input);
};

#endif