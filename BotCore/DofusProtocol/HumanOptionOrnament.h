#ifndef HUMANOPTIONORNAMENT
#define HUMANOPTIONORNAMENT

#include "../IO/ICustomDataInput.h"
#include "HumanOption.h"

class HumanOptionOrnament : public HumanOption {
public:
    unsigned int ornamentId = 0;
    unsigned int level = 0;
    int leagueId = 0;
    int ladderPosition = 0;
    unsigned int protocolId = 8260;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionOrnament(ICustomDataInput &input);

    void _ornamentIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _leagueIdFunc(ICustomDataInput &input);

    void _ladderPositionFunc(ICustomDataInput &input);
};

#endif