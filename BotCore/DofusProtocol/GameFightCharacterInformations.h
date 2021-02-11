#ifndef GAMEFIGHTCHARACTERINFORMATIONS
#define GAMEFIGHTCHARACTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterNamedInformations.h"
#include "ActorAlignmentInformations.h"

class GameFightCharacterInformations : public GameFightFighterNamedInformations {
public:
    unsigned int level = 0;
    ActorAlignmentInformations alignmentInfos;
    int breed = 0;
    bool sex = false;
    unsigned int protocolId = 201;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightCharacterInformations(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);
};

#endif