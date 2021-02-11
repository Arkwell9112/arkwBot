#ifndef FIGHTRESULTADDITIONALDATA
#define FIGHTRESULTADDITIONALDATA

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FightResultAdditionalData : public NetworkInterface {
public:
    unsigned int protocolId = 1833;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultAdditionalData(ICustomDataInput &input);
};

#endif