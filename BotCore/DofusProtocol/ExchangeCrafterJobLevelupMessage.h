#ifndef EXCHANGECRAFTERJOBLEVELUPMESSAGE
#define EXCHANGECRAFTERJOBLEVELUPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeCrafterJobLevelupMessage : public NetworkInterface {
public:
    unsigned int crafterJobLevel = 0;
    unsigned int protocolId = 710;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCrafterJobLevelupMessage(ICustomDataInput &input);

    void _crafterJobLevelFunc(ICustomDataInput &input);
};

#endif