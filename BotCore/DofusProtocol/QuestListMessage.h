#ifndef QUESTLISTMESSAGE
#define QUESTLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "QuestActiveInformations.h"

class QuestListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> finishedQuestsIds;
    std::vector<unsigned int> finishedQuestsCounts;
    std::vector<QuestActiveInformations> activeQuests;
    std::vector<unsigned int> reinitDoneQuestsIds;
    unsigned int protocolId = 1102;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestListMessage(ICustomDataInput &input);

    void _finishedQuestsIdsFunc(ICustomDataInput &input);

    void _finishedQuestsCountsFunc(ICustomDataInput &input);

    void _activeQuestsFunc(ICustomDataInput &input);

    void _reinitDoneQuestsIdsFunc(ICustomDataInput &input);
};

#endif