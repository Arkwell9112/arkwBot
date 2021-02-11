#ifndef UPDATEMOUNTINTEGERCHARACTERISTIC
#define UPDATEMOUNTINTEGERCHARACTERISTIC

#include "../IO/ICustomDataInput.h"
#include "UpdateMountCharacteristic.h"

class UpdateMountIntegerCharacteristic : public UpdateMountCharacteristic {
public:
    int value = 0;
    unsigned int protocolId = 8508;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateMountIntegerCharacteristic(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif