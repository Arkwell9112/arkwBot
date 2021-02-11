#ifndef MAPREWARDRATEMESSAGE
#define MAPREWARDRATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapRewardRateMessage : public NetworkInterface {
public:
    int mapRate = 0;
    int subAreaRate = 0;
    int totalRate = 0;
    unsigned int protocolId = 3476;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapRewardRateMessage(ICustomDataInput &input);

    void _mapRateFunc(ICustomDataInput &input);

    void _subAreaRateFunc(ICustomDataInput &input);

    void _totalRateFunc(ICustomDataInput &input);
};

#endif