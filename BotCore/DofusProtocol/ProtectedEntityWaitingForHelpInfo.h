#ifndef PROTECTEDENTITYWAITINGFORHELPINFO
#define PROTECTEDENTITYWAITINGFORHELPINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ProtectedEntityWaitingForHelpInfo : public NetworkInterface {
public:
    int timeLeftBeforeFight = 0;
    int waitTimeForPlacement = 0;
    unsigned int nbPositionForDefensors = 0;
    unsigned int protocolId = 2391;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ProtectedEntityWaitingForHelpInfo(ICustomDataInput &input);

    void _timeLeftBeforeFightFunc(ICustomDataInput &input);

    void _waitTimeForPlacementFunc(ICustomDataInput &input);

    void _nbPositionForDefensorsFunc(ICustomDataInput &input);
};

#endif