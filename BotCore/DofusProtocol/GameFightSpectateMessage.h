#ifndef GAMEFIGHTSPECTATEMESSAGE
#define GAMEFIGHTSPECTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameFightEffectTriggerCount.h"
#include "GameActionMark.h"
#include "FightDispellableEffectExtendedInformations.h"
#include "Idol.h"

class GameFightSpectateMessage : public NetworkInterface {
public:
    std::vector<FightDispellableEffectExtendedInformations> effects;
    std::vector<GameActionMark> marks;
    unsigned int gameTurn = 0;
    unsigned int fightStart = 0;
    std::vector<Idol> idols;
    std::vector<GameFightEffectTriggerCount> fxTriggerCounts;
    unsigned int protocolId = 9897;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightSpectateMessage(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _marksFunc(ICustomDataInput &input);

    void _gameTurnFunc(ICustomDataInput &input);

    void _fightStartFunc(ICustomDataInput &input);

    void _idolsFunc(ICustomDataInput &input);

    void _fxTriggerCountsFunc(ICustomDataInput &input);
};

#endif