#ifndef EXCHANGEMOUNTSPADDOCKADDMESSAGE
#define EXCHANGEMOUNTSPADDOCKADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MountClientData.h"

class ExchangeMountsPaddockAddMessage : public NetworkInterface {
public:
    std::vector<MountClientData> mountDescription;
    unsigned int protocolId = 9369;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountsPaddockAddMessage(ICustomDataInput &input);

    void _mountDescriptionFunc(ICustomDataInput &input);
};

#endif