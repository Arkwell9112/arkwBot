#ifndef GAMEENTITYDISPOSITIONMESSAGE
#define GAMEENTITYDISPOSITIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "IdentifiedEntityDispositionInformations.h"
#include "EntityDispositionInformations.h"

class GameEntityDispositionMessage : public NetworkInterface {
public:
    IdentifiedEntityDispositionInformations disposition;
    unsigned int protocolId = 2388;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameEntityDispositionMessage(ICustomDataInput &input);
};

#endif