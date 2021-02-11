#ifndef PRESET
#define PRESET

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class Preset : public NetworkInterface {
public:
    int id = 0;
    unsigned int protocolId = 4804;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_Preset(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif