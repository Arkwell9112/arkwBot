#ifndef EXCHANGEMOUNTSTERILIZEFROMPADDOCKMESSAGE
#define EXCHANGEMOUNTSTERILIZEFROMPADDOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ExchangeMountSterilizeFromPaddockMessage : public NetworkInterface {
public:
    std::string name;
    int worldX = 0;
    int worldY = 0;
    std::string sterilizator;
    unsigned int protocolId = 3932;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountSterilizeFromPaddockMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _sterilizatorFunc(ICustomDataInput &input);
};

#endif