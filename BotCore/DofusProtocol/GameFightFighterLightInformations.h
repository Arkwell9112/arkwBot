#ifndef GAMEFIGHTFIGHTERLIGHTINFORMATIONS
#define GAMEFIGHTFIGHTERLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightFighterLightInformations : public NetworkInterface {
public:
    double id = 0;
    unsigned int wave = 0;
    unsigned int level = 0;
    int breed = 0;
    bool sex = false;
    bool alive = false;
    unsigned int protocolId = 4298;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterLightInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _waveFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);
};

#endif