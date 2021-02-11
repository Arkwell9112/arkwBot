#ifndef MOUNTEQUIPEDERRORMESSAGE
#define MOUNTEQUIPEDERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountEquipedErrorMessage : public NetworkInterface {
public:
    unsigned int errorType = 0;
    unsigned int protocolId = 3527;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountEquipedErrorMessage(ICustomDataInput &input);

    void _errorTypeFunc(ICustomDataInput &input);
};

#endif