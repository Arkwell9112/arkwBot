#ifndef EXCHANGEBIDHOUSETYPEMESSAGE
#define EXCHANGEBIDHOUSETYPEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidHouseTypeMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    bool follow = false;
    unsigned int protocolId = 9302;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseTypeMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _followFunc(ICustomDataInput &input);
};

#endif