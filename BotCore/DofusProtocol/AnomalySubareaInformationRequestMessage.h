#ifndef ANOMALYSUBAREAINFORMATIONREQUESTMESSAGE
#define ANOMALYSUBAREAINFORMATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AnomalySubareaInformation.h"

class AnomalySubareaInformationRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5794;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AnomalySubareaInformationRequestMessage(ICustomDataInput &input);
};

#endif