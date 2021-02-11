#ifndef ANOMALYSUBAREAINFORMATIONRESPONSEMESSAGE
#define ANOMALYSUBAREAINFORMATIONRESPONSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AnomalySubareaInformation.h"

class AnomalySubareaInformationResponseMessage : public NetworkInterface {
public:
    std::vector<AnomalySubareaInformation> subareas;
    unsigned int protocolId = 5870;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AnomalySubareaInformationResponseMessage(ICustomDataInput &input);

    void _subareasFunc(ICustomDataInput &input);
};

#endif