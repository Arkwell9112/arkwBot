#ifndef ACCESSORYPREVIEWMESSAGE
#define ACCESSORYPREVIEWMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityLook.h"

class AccessoryPreviewMessage : public NetworkInterface {
public:
    EntityLook look;
    unsigned int protocolId = 4935;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccessoryPreviewMessage(ICustomDataInput &input);
};

#endif