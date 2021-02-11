#ifndef PADDOCKINFORMATIONSFORSELL
#define PADDOCKINFORMATIONSFORSELL

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "PaddockInformations.h"

class PaddockInformationsForSell : public NetworkInterface {
public:
    std::string guildOwner;
    int worldX = 0;
    int worldY = 0;
    unsigned int subAreaId = 0;
    int nbMount = 0;
    int nbObject = 0;
    double price = 0;
    unsigned int protocolId = 9040;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockInformationsForSell(ICustomDataInput &input);

    void _guildOwnerFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _nbMountFunc(ICustomDataInput &input);

    void _nbObjectFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif