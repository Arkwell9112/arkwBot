#ifndef PADDOCKCONTENTINFORMATIONS
#define PADDOCKCONTENTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "PaddockInformations.h"
#include "MountInformationsForPaddock.h"

class PaddockContentInformations : public PaddockInformations {
public:
    double paddockId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    bool abandonned = false;
    std::vector<MountInformationsForPaddock> mountsInformations;
    unsigned int protocolId = 5999;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockContentInformations(ICustomDataInput &input);

    void _paddockIdFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _abandonnedFunc(ICustomDataInput &input);

    void _mountsInformationsFunc(ICustomDataInput &input);
};

#endif