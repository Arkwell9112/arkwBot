#ifndef PRISMSUBAREAEMPTYINFO
#define PRISMSUBAREAEMPTYINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismSubareaEmptyInfo : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int allianceId = 0;
    unsigned int protocolId = 325;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismSubareaEmptyInfo(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _allianceIdFunc(ICustomDataInput &input);
};

#endif