#ifndef GAMECONTEXTACTORPOSITIONINFORMATIONS
#define GAMECONTEXTACTORPOSITIONINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityDispositionInformations.h"

class GameContextActorPositionInformations : public NetworkInterface {
public:
    double contextualId = 0;
    EntityDispositionInformations disposition;
    unsigned int protocolId = 4155;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextActorPositionInformations(ICustomDataInput &input);

    void _contextualIdFunc(ICustomDataInput &input);
};

#endif