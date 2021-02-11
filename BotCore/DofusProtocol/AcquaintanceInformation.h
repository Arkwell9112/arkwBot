#ifndef ACQUAINTANCEINFORMATION
#define ACQUAINTANCEINFORMATION

#include "../IO/ICustomDataInput.h"
#include "AbstractContactInformations.h"

class AcquaintanceInformation : public AbstractContactInformations {
public:
    unsigned int playerState = 99;
    unsigned int protocolId = 6697;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintanceInformation(ICustomDataInput &input);

    void _playerStateFunc(ICustomDataInput &input);
};

#endif