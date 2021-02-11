#ifndef OBJECTEFFECT
#define OBJECTEFFECT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectEffect : public NetworkInterface {
public:
    unsigned int actionId = 0;
    unsigned int protocolId = 6605;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffect(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);
};

#endif