#ifndef IDOLSELECTERRORMESSAGE
#define IDOLSELECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Idol.h"

class IdolSelectErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int idolId = 0;
    bool activate = false;
    bool party = false;
    unsigned int protocolId = 7319;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolSelectErrorMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);

    void _idolIdFunc(ICustomDataInput &input);
};

#endif