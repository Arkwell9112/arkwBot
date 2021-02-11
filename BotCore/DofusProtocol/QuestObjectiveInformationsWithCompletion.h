#ifndef QUESTOBJECTIVEINFORMATIONSWITHCOMPLETION
#define QUESTOBJECTIVEINFORMATIONSWITHCOMPLETION

#include "../IO/ICustomDataInput.h"
#include "QuestObjectiveInformations.h"

class QuestObjectiveInformationsWithCompletion : public QuestObjectiveInformations {
public:
    unsigned int curCompletion = 0;
    unsigned int maxCompletion = 0;
    unsigned int protocolId = 1770;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestObjectiveInformationsWithCompletion(ICustomDataInput &input);

    void _curCompletionFunc(ICustomDataInput &input);

    void _maxCompletionFunc(ICustomDataInput &input);
};

#endif