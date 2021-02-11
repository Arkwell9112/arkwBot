#ifndef GAMEDATAPADDOCKOBJECTADDMESSAGE
#define GAMEDATAPADDOCKOBJECTADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"
#include "PaddockItem.h"

class GameDataPaddockObjectAddMessage : public NetworkInterface {
public:
    PaddockItem paddockItemDescription;
    unsigned int protocolId = 531;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameDataPaddockObjectAddMessage(ICustomDataInput &input);
};

#endif