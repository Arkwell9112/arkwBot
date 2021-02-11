#ifndef CURRENTMAPMESSAGE
#define CURRENTMAPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class CurrentMapMessage : public NetworkInterface {
public:
    double mapId = 0;
    std::string mapKey;
    unsigned int protocolId = 2889;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CurrentMapMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _mapKeyFunc(ICustomDataInput &input);
};

#endif