#ifndef SEQUENCENUMBERREQUESTMESSAGE
#define SEQUENCENUMBERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SequenceNumberRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4518;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SequenceNumberRequestMessage(ICustomDataInput &input);
};

#endif