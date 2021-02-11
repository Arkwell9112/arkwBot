#ifndef CINEMATICMESSAGE
#define CINEMATICMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CinematicMessage : public NetworkInterface {
public:
    unsigned int cinematicId = 0;
    unsigned int protocolId = 5340;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CinematicMessage(ICustomDataInput &input);

    void _cinematicIdFunc(ICustomDataInput &input);
};

#endif