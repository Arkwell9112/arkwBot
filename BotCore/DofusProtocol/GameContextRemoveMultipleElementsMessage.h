#ifndef GAMECONTEXTREMOVEMULTIPLEELEMENTSMESSAGE
#define GAMECONTEXTREMOVEMULTIPLEELEMENTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameContextRemoveMultipleElementsMessage : public NetworkInterface {
public:
    std::vector<double> elementsIds;
    unsigned int protocolId = 2765;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextRemoveMultipleElementsMessage(ICustomDataInput &input);

    void _elementsIdsFunc(ICustomDataInput &input);
};

#endif