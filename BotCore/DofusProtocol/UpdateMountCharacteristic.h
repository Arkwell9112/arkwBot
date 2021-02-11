#ifndef UPDATEMOUNTCHARACTERISTIC
#define UPDATEMOUNTCHARACTERISTIC

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class UpdateMountCharacteristic : public NetworkInterface {
public:
    unsigned int type = 0;
    unsigned int protocolId = 8476;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateMountCharacteristic(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif