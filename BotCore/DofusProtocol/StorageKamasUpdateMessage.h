#ifndef STORAGEKAMASUPDATEMESSAGE
#define STORAGEKAMASUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "KamasUpdateMessage.h"

class StorageKamasUpdateMessage : public NetworkInterface {
public:
    double kamasTotal = 0;
    unsigned int protocolId = 4053;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StorageKamasUpdateMessage(ICustomDataInput &input);

    void _kamasTotalFunc(ICustomDataInput &input);
};

#endif