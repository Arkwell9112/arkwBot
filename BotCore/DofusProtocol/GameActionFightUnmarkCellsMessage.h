#ifndef GAMEACTIONFIGHTUNMARKCELLSMESSAGE
#define GAMEACTIONFIGHTUNMARKCELLSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightUnmarkCellsMessage : public AbstractGameActionMessage {
public:
    int markId = 0;
    unsigned int protocolId = 2232;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightUnmarkCellsMessage(ICustomDataInput &input);

    void _markIdFunc(ICustomDataInput &input);
};

#endif