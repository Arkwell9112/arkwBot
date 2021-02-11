#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "IdentifiedEntityDispositionInformations.h"
#include "EntityDispositionInformations.h"

class GameFightPlacementSwapPositionsMessage : public NetworkInterface {
public:
    std::vector<IdentifiedEntityDispositionInformations> dispositions;
    unsigned int protocolId = 4578;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsMessage(ICustomDataInput &input);

    void _dispositionsFunc(ICustomDataInput &input);
};

#endif