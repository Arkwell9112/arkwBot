#ifndef GAMEENTITIESDISPOSITIONMESSAGE
#define GAMEENTITIESDISPOSITIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "IdentifiedEntityDispositionInformations.h"
#include "EntityDispositionInformations.h"

class GameEntitiesDispositionMessage : public NetworkInterface {
public:
    std::vector<IdentifiedEntityDispositionInformations> dispositions;
    unsigned int protocolId = 5133;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameEntitiesDispositionMessage(ICustomDataInput &input);

    void _dispositionsFunc(ICustomDataInput &input);
};

#endif