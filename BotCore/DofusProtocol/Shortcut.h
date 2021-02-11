#ifndef SHORTCUT
#define SHORTCUT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class Shortcut : public NetworkInterface {
public:
    unsigned int slot = 0;
    unsigned int protocolId = 1043;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_Shortcut(ICustomDataInput &input);

    void _slotFunc(ICustomDataInput &input);
};

#endif