#ifndef ALLIANCEINSIDERPRISMINFORMATION
#define ALLIANCEINSIDERPRISMINFORMATION

#include "../IO/ICustomDataInput.h"
#include <vector>
#include <string>
#include "ObjectItem.h"
#include "Item.h"
#include "PrismInformation.h"

class AllianceInsiderPrismInformation : public PrismInformation {
public:
    unsigned int lastTimeSlotModificationDate = 0;
    unsigned int lastTimeSlotModificationAuthorGuildId = 0;
    double lastTimeSlotModificationAuthorId = 0;
    std::string lastTimeSlotModificationAuthorName;
    std::vector<ObjectItem> modulesObjects;
    unsigned int protocolId = 3742;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInsiderPrismInformation(ICustomDataInput &input);

    void _lastTimeSlotModificationDateFunc(ICustomDataInput &input);

    void _lastTimeSlotModificationAuthorGuildIdFunc(ICustomDataInput &input);

    void _lastTimeSlotModificationAuthorIdFunc(ICustomDataInput &input);

    void _lastTimeSlotModificationAuthorNameFunc(ICustomDataInput &input);

    void _modulesObjectsFunc(ICustomDataInput &input);
};

#endif