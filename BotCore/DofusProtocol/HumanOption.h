#ifndef HUMANOPTION
#define HUMANOPTION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HumanOption : public NetworkInterface {
public:
    unsigned int protocolId = 4884;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOption(ICustomDataInput &input);
};

#endif