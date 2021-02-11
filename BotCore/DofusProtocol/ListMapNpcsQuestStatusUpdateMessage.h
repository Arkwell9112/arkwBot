#ifndef LISTMAPNPCSQUESTSTATUSUPDATEMESSAGE
#define LISTMAPNPCSQUESTSTATUSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MapNpcQuestInfo.h"

class ListMapNpcsQuestStatusUpdateMessage : public NetworkInterface {
public:
    std::vector<MapNpcQuestInfo> mapInfo;
    unsigned int protocolId = 953;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ListMapNpcsQuestStatusUpdateMessage(ICustomDataInput &input);

    void _mapInfoFunc(ICustomDataInput &input);
};

#endif