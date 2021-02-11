#ifndef PARTYENTITYBASEINFORMATION
#define PARTYENTITYBASEINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityLook.h"

class PartyEntityBaseInformation : public NetworkInterface {
public:
    unsigned int indexId = 0;
    unsigned int entityModelId = 0;
    EntityLook entityLook;
    unsigned int protocolId = 869;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyEntityBaseInformation(ICustomDataInput &input);

    void _indexIdFunc(ICustomDataInput &input);

    void _entityModelIdFunc(ICustomDataInput &input);
};

#endif