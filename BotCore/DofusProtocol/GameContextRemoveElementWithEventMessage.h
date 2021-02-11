#ifndef GAMECONTEXTREMOVEELEMENTWITHEVENTMESSAGE
#define GAMECONTEXTREMOVEELEMENTWITHEVENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameContextRemoveElementMessage.h"

class GameContextRemoveElementWithEventMessage : public GameContextRemoveElementMessage {
public:
    unsigned int elementEventId = 0;
    unsigned int protocolId = 585;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextRemoveElementWithEventMessage(ICustomDataInput &input);

    void _elementEventIdFunc(ICustomDataInput &input);
};

#endif