#ifndef GAMEENTITYDISPOSITIONERRORMESSAGE
#define GAMEENTITYDISPOSITIONERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameEntityDispositionErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5628;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameEntityDispositionErrorMessage(ICustomDataInput &input);
};

#endif