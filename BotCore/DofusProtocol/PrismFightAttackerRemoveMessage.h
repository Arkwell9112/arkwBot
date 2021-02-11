#ifndef PRISMFIGHTATTACKERREMOVEMESSAGE
#define PRISMFIGHTATTACKERREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismFightAttackerRemoveMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int fightId = 0;
    double fighterToRemoveId = 0;
    unsigned int protocolId = 3522;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightAttackerRemoveMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _fighterToRemoveIdFunc(ICustomDataInput &input);
};

#endif