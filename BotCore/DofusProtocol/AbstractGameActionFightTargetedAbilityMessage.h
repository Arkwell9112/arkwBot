#ifndef ABSTRACTGAMEACTIONFIGHTTARGETEDABILITYMESSAGE
#define ABSTRACTGAMEACTIONFIGHTTARGETEDABILITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class AbstractGameActionFightTargetedAbilityMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int destinationCellId = 0;
    unsigned int critical = 1;
    bool silentCast = false;
    bool verboseCast = false;
    unsigned int protocolId = 1401;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractGameActionFightTargetedAbilityMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _destinationCellIdFunc(ICustomDataInput &input);

    void _criticalFunc(ICustomDataInput &input);
};

#endif