#ifndef ACQUAINTANCESEARCHMESSAGE
#define ACQUAINTANCESEARCHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AcquaintanceSearchMessage : public NetworkInterface {
public:
    std::string nickname;
    unsigned int protocolId = 8113;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintanceSearchMessage(ICustomDataInput &input);

    void _nicknameFunc(ICustomDataInput &input);
};

#endif