#ifndef EXCHANGEMOUNTSTAKENFROMPADDOCKMESSAGE
#define EXCHANGEMOUNTSTAKENFROMPADDOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ExchangeMountsTakenFromPaddockMessage : public NetworkInterface {
public:
    std::string name;
    int worldX = 0;
    int worldY = 0;
    std::string ownername;
    unsigned int protocolId = 6934;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountsTakenFromPaddockMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _ownernameFunc(ICustomDataInput &input);
};

#endif