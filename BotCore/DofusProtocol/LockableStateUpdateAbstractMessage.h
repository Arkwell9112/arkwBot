#ifndef LOCKABLESTATEUPDATEABSTRACTMESSAGE
#define LOCKABLESTATEUPDATEABSTRACTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LockableStateUpdateAbstractMessage : public NetworkInterface {
public:
    bool locked = false;
    unsigned int protocolId = 9666;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableStateUpdateAbstractMessage(ICustomDataInput &input);

    void _lockedFunc(ICustomDataInput &input);
};

#endif