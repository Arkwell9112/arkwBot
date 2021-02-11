#ifndef GAMEDATAPADDOCKOBJECTLISTADDMESSAGE
#define GAMEDATAPADDOCKOBJECTLISTADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Item.h"
#include "PaddockItem.h"

class GameDataPaddockObjectListAddMessage : public NetworkInterface {
public:
    std::vector<PaddockItem> paddockItemDescription;
    unsigned int protocolId = 847;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameDataPaddockObjectListAddMessage(ICustomDataInput &input);

    void _paddockItemDescriptionFunc(ICustomDataInput &input);
};

#endif