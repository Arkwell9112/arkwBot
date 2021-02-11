#ifndef IDOL
#define IDOL

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class Idol : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int xpBonusPercent = 0;
    unsigned int dropBonusPercent = 0;
    unsigned int protocolId = 2929;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_Idol(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _xpBonusPercentFunc(ICustomDataInput &input);

    void _dropBonusPercentFunc(ICustomDataInput &input);
};

#endif