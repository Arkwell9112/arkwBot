#ifndef CHARACTERSELECTEDSUCCESSMESSAGE
#define CHARACTERSELECTEDSUCCESSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterBaseInformations.h"

class CharacterSelectedSuccessMessage : public NetworkInterface {
public:
    CharacterBaseInformations infos;
    bool isCollectingStats = false;
    unsigned int protocolId = 8527;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSelectedSuccessMessage(ICustomDataInput &input);

    void _isCollectingStatsFunc(ICustomDataInput &input);
};

#endif