#ifndef GAMEACTIONFIGHTTACKLEDMESSAGE
#define GAMEACTIONFIGHTTACKLEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "AbstractGameActionMessage.h"

class GameActionFightTackledMessage : public AbstractGameActionMessage {
public:
    std::vector<double> tacklersIds;
    unsigned int protocolId = 7305;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightTackledMessage(ICustomDataInput &input);

    void _tacklersIdsFunc(ICustomDataInput &input);
};

#endif