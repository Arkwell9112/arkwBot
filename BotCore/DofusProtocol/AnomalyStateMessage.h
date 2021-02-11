#ifndef ANOMALYSTATEMESSAGE
#define ANOMALYSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AnomalyStateMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    bool open = false;
    double closingTime = 0;
    unsigned int protocolId = 1176;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AnomalyStateMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _openFunc(ICustomDataInput &input);

    void _closingTimeFunc(ICustomDataInput &input);
};

#endif