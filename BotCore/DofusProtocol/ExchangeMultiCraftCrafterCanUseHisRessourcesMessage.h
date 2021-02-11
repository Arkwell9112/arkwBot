#ifndef EXCHANGEMULTICRAFTCRAFTERCANUSEHISRESSOURCESMESSAGE
#define EXCHANGEMULTICRAFTCRAFTERCANUSEHISRESSOURCESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeMultiCraftCrafterCanUseHisRessourcesMessage : public NetworkInterface {
public:
    bool allowed = false;
    unsigned int protocolId = 3218;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMultiCraftCrafterCanUseHisRessourcesMessage(ICustomDataInput &input);

    void _allowedFunc(ICustomDataInput &input);
};

#endif