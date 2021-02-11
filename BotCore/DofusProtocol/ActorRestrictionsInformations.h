#ifndef ACTORRESTRICTIONSINFORMATIONS
#define ACTORRESTRICTIONSINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ActorRestrictionsInformations : public NetworkInterface {
public:
    bool cantBeAggressed = false;
    bool cantBeChallenged = false;
    bool cantTrade = false;
    bool cantBeAttackedByMutant = false;
    bool cantRun = false;
    bool forceSlowWalk = false;
    bool cantMinimize = false;
    bool cantMove = false;
    bool cantAggress = false;
    bool cantChallenge = false;
    bool cantExchange = false;
    bool cantAttack = false;
    bool cantChat = false;
    bool cantBeMerchant = false;
    bool cantUseObject = false;
    bool cantUseTaxCollector = false;
    bool cantUseInteractive = false;
    bool cantSpeakToNPC = false;
    bool cantChangeZone = false;
    bool cantAttackMonster = false;
    bool cantWalk8Directions = false;
    unsigned int protocolId = 9470;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ActorRestrictionsInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);
};

#endif