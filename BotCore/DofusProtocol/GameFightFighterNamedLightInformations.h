#ifndef GAMEFIGHTFIGHTERNAMEDLIGHTINFORMATIONS
#define GAMEFIGHTFIGHTERNAMEDLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "GameFightFighterLightInformations.h"

class GameFightFighterNamedLightInformations : public GameFightFighterLightInformations {
public:
    std::string name;
    unsigned int protocolId = 8213;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterNamedLightInformations(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif