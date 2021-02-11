#ifndef PRISMGEOLOCALIZEDINFORMATION
#define PRISMGEOLOCALIZEDINFORMATION

#include "../IO/ICustomDataInput.h"
#include "PrismSubareaEmptyInfo.h"
#include "PrismInformation.h"

class PrismGeolocalizedInformation : public PrismSubareaEmptyInfo {
public:
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    PrismInformation prism;
    unsigned int protocolId = 946;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismGeolocalizedInformation(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif