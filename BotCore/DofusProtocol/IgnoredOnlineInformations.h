#ifndef IGNOREDONLINEINFORMATIONS
#define IGNOREDONLINEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "IgnoredInformations.h"

class IgnoredOnlineInformations : public IgnoredInformations {
public:
    double playerId = 0;
    std::string playerName;
    int breed = 0;
    bool sex = false;
    unsigned int protocolId = 8804;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredOnlineInformations(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);
};

#endif