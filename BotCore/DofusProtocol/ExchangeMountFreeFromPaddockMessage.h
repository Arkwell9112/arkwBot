#ifndef EXCHANGEMOUNTFREEFROMPADDOCKMESSAGE
#define EXCHANGEMOUNTFREEFROMPADDOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ExchangeMountFreeFromPaddockMessage : public NetworkInterface {
public:
    std::string name;
    int worldX = 0;
    int worldY = 0;
    std::string liberator;
    unsigned int protocolId = 2811;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountFreeFromPaddockMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _liberatorFunc(ICustomDataInput &input);
};

#endif