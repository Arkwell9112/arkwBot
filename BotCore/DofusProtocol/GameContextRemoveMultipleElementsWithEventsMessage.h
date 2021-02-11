#ifndef GAMECONTEXTREMOVEMULTIPLEELEMENTSWITHEVENTSMESSAGE
#define GAMECONTEXTREMOVEMULTIPLEELEMENTSWITHEVENTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GameContextRemoveMultipleElementsMessage.h"

class GameContextRemoveMultipleElementsWithEventsMessage : public GameContextRemoveMultipleElementsMessage {
public:
    std::vector<unsigned int> elementEventIds;
    unsigned int protocolId = 238;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextRemoveMultipleElementsWithEventsMessage(ICustomDataInput &input);

    void _elementEventIdsFunc(ICustomDataInput &input);
};

#endif