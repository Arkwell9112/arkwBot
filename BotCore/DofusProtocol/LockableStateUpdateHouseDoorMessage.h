#ifndef LOCKABLESTATEUPDATEHOUSEDOORMESSAGE
#define LOCKABLESTATEUPDATEHOUSEDOORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "LockableStateUpdateAbstractMessage.h"

class LockableStateUpdateHouseDoorMessage : public LockableStateUpdateAbstractMessage {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    unsigned int protocolId = 6331;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableStateUpdateHouseDoorMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);
};

#endif