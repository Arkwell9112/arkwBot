#ifndef COMPASSRESETMESSAGE
#define COMPASSRESETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CompassResetMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    unsigned int protocolId = 4473;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CompassResetMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif