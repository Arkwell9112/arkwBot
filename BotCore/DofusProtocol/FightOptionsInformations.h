#ifndef FIGHTOPTIONSINFORMATIONS
#define FIGHTOPTIONSINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FightOptionsInformations : public NetworkInterface {
public:
    bool isSecret = false;
    bool isRestrictedToPartyOnly = false;
    bool isClosed = false;
    bool isAskingForHelp = false;
    unsigned int protocolId = 1142;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightOptionsInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);
};

#endif