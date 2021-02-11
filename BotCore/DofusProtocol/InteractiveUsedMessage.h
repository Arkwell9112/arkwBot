#ifndef INTERACTIVEUSEDMESSAGE
#define INTERACTIVEUSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class InteractiveUsedMessage : public NetworkInterface {
public:
    double entityId = 0;
    unsigned int elemId = 0;
    unsigned int skillId = 0;
    unsigned int duration = 0;
    bool canMove = false;
    unsigned int protocolId = 1234;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveUsedMessage(ICustomDataInput &input);

    void _entityIdFunc(ICustomDataInput &input);

    void _elemIdFunc(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);

    void _durationFunc(ICustomDataInput &input);

    void _canMoveFunc(ICustomDataInput &input);
};

#endif