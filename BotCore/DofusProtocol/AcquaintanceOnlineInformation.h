#ifndef ACQUAINTANCEONLINEINFORMATION
#define ACQUAINTANCEONLINEINFORMATION

#include "../IO/ICustomDataInput.h"
#include <string>
#include "PlayerStatus.h"
#include "AcquaintanceInformation.h"

class AcquaintanceOnlineInformation : public AcquaintanceInformation {
public:
    double playerId = 0;
    std::string playerName;
    unsigned int moodSmileyId = 0;
    PlayerStatus status;
    unsigned int protocolId = 2613;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintanceOnlineInformation(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _moodSmileyIdFunc(ICustomDataInput &input);
};

#endif