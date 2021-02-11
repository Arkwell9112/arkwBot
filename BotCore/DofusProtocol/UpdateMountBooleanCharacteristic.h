#ifndef UPDATEMOUNTBOOLEANCHARACTERISTIC
#define UPDATEMOUNTBOOLEANCHARACTERISTIC

#include "../IO/ICustomDataInput.h"
#include "UpdateMountCharacteristic.h"

class UpdateMountBooleanCharacteristic : public UpdateMountCharacteristic {
public:
    bool value = false;
    unsigned int protocolId = 3931;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateMountBooleanCharacteristic(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif