#ifndef TITLESANDORNAMENTSLISTREQUESTMESSAGE
#define TITLESANDORNAMENTSLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TitlesAndOrnamentsListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5392;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitlesAndOrnamentsListRequestMessage(ICustomDataInput &input);
};

#endif