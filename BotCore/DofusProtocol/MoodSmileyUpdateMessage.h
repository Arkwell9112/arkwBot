#ifndef MOODSMILEYUPDATEMESSAGE
#define MOODSMILEYUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MoodSmileyUpdateMessage : public NetworkInterface {
public:
    unsigned int accountId = 0;
    double playerId = 0;
    unsigned int smileyId = 0;
    unsigned int protocolId = 5265;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MoodSmileyUpdateMessage(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _smileyIdFunc(ICustomDataInput &input);
};

#endif