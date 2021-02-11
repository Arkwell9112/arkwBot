#ifndef PARTYMEMBERGEOPOSITION
#define PARTYMEMBERGEOPOSITION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PartyMemberGeoPosition : public NetworkInterface {
public:
    unsigned int memberId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    unsigned int protocolId = 6125;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberGeoPosition(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif