#ifndef EXCHANGEMULTICRAFTSETCRAFTERCANUSEHISRESSOURCESMESSAGE
#define EXCHANGEMULTICRAFTSETCRAFTERCANUSEHISRESSOURCESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage : public NetworkInterface {
public:
    bool allow = false;
    unsigned int protocolId = 3539;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage(ICustomDataInput &input);

    void _allowFunc(ICustomDataInput &input);
};

#endif