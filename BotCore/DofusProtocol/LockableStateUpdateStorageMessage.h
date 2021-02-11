#ifndef LOCKABLESTATEUPDATESTORAGEMESSAGE
#define LOCKABLESTATEUPDATESTORAGEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "LockableStateUpdateAbstractMessage.h"

class LockableStateUpdateStorageMessage : public LockableStateUpdateAbstractMessage {
public:
    double mapId = 0;
    unsigned int elementId = 0;
    unsigned int protocolId = 8935;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableStateUpdateStorageMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _elementIdFunc(ICustomDataInput &input);
};

#endif