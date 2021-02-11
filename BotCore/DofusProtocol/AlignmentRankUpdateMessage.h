#ifndef ALIGNMENTRANKUPDATEMESSAGE
#define ALIGNMENTRANKUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlignmentRankUpdateMessage : public NetworkInterface {
public:
    unsigned int alignmentRank = 0;
    bool verbose = false;
    unsigned int protocolId = 423;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentRankUpdateMessage(ICustomDataInput &input);

    void _alignmentRankFunc(ICustomDataInput &input);

    void _verboseFunc(ICustomDataInput &input);
};

#endif