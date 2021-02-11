#ifndef STATEDELEMENTUPDATEDMESSAGE
#define STATEDELEMENTUPDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "StatedElement.h"

class StatedElementUpdatedMessage : public NetworkInterface {
public:
    StatedElement statedElement;
    unsigned int protocolId = 6994;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatedElementUpdatedMessage(ICustomDataInput &input);
};

#endif