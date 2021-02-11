#ifndef FORGETTABLESPELLEQUIPMENTSLOTSMESSAGE
#define FORGETTABLESPELLEQUIPMENTSLOTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ForgettableSpellEquipmentSlotsMessage : public NetworkInterface {
public:
    int quantity = 0;
    unsigned int protocolId = 1387;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ForgettableSpellEquipmentSlotsMessage(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif