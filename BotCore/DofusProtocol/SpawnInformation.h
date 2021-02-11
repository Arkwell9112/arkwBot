#ifndef SPAWNINFORMATION
#define SPAWNINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SpawnInformation : public NetworkInterface {
public:
    unsigned int protocolId = 259;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpawnInformation(ICustomDataInput &input);
};

#endif