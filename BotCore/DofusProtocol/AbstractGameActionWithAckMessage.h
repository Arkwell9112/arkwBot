#ifndef ABSTRACTGAMEACTIONWITHACKMESSAGE
#define ABSTRACTGAMEACTIONWITHACKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class AbstractGameActionWithAckMessage : public AbstractGameActionMessage {
public:
    int waitAckId = 0;
    unsigned int protocolId = 4204;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractGameActionWithAckMessage(ICustomDataInput &input);

    void _waitAckIdFunc(ICustomDataInput &input);
};

#endif