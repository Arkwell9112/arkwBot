#ifndef GAMEACTIONFIGHTMARKCELLSMESSAGE
#define GAMEACTIONFIGHTMARKCELLSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameActionMark.h"
#include "AbstractGameActionMessage.h"

class GameActionFightMarkCellsMessage : public AbstractGameActionMessage {
public:
    GameActionMark mark;
    unsigned int protocolId = 4659;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightMarkCellsMessage(ICustomDataInput &input);
};

#endif