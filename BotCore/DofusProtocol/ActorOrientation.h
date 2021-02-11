#ifndef ACTORORIENTATION
#define ACTORORIENTATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ActorOrientation : public NetworkInterface {
public:
    double id = 0;
    unsigned int direction = 1;
    unsigned int protocolId = 8097;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ActorOrientation(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _directionFunc(ICustomDataInput &input);
};

#endif