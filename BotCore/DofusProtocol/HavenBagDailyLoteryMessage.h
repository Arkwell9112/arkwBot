#ifndef HAVENBAGDAILYLOTERYMESSAGE
#define HAVENBAGDAILYLOTERYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HavenBagDailyLoteryMessage : public NetworkInterface {
public:
    unsigned int returnType = 0;
    std::string gameActionId;
    unsigned int protocolId = 1465;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagDailyLoteryMessage(ICustomDataInput &input);

    void _returnTypeFunc(ICustomDataInput &input);

    void _gameActionIdFunc(ICustomDataInput &input);
};

#endif