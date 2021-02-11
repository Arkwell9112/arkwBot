#ifndef PARTYGUESTINFORMATIONS
#define PARTYGUESTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "PartyEntityBaseInformation.h"
#include "PlayerStatus.h"
#include "EntityLook.h"

class PartyGuestInformations : public NetworkInterface {
public:
    double guestId = 0;
    double hostId = 0;
    std::string name;
    EntityLook guestLook;
    int breed = 0;
    bool sex = false;
    PlayerStatus status;
    std::vector<PartyEntityBaseInformation> entities;
    unsigned int protocolId = 422;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyGuestInformations(ICustomDataInput &input);

    void _guestIdFunc(ICustomDataInput &input);

    void _hostIdFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _entitiesFunc(ICustomDataInput &input);
};

#endif