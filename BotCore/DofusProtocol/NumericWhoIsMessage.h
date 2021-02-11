#ifndef NUMERICWHOISMESSAGE
#define NUMERICWHOISMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NumericWhoIsMessage : public NetworkInterface {
public:
    double playerId = 0;
    unsigned int accountId = 0;
    unsigned int protocolId = 2002;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NumericWhoIsMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);
};

#endif