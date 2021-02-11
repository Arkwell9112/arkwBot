#ifndef EXCHANGEMOUNTSPADDOCKREMOVEMESSAGE
#define EXCHANGEMOUNTSPADDOCKREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeMountsPaddockRemoveMessage : public NetworkInterface {
public:
    std::vector<int> mountsId;
    unsigned int protocolId = 952;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountsPaddockRemoveMessage(ICustomDataInput &input);

    void _mountsIdFunc(ICustomDataInput &input);
};

#endif