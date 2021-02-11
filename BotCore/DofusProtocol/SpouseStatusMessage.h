#ifndef SPOUSESTATUSMESSAGE
#define SPOUSESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SpouseStatusMessage : public NetworkInterface {
public:
    bool hasSpouse = false;
    unsigned int protocolId = 8258;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpouseStatusMessage(ICustomDataInput &input);

    void _hasSpouseFunc(ICustomDataInput &input);
};

#endif