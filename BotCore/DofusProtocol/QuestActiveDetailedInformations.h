#ifndef QUESTACTIVEDETAILEDINFORMATIONS
#define QUESTACTIVEDETAILEDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "QuestObjectiveInformations.h"
#include "QuestActiveInformations.h"

class QuestActiveDetailedInformations : public QuestActiveInformations {
public:
    unsigned int stepId = 0;
    std::vector<QuestObjectiveInformations> objectives;
    unsigned int protocolId = 1795;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestActiveDetailedInformations(ICustomDataInput &input);

    void _stepIdFunc(ICustomDataInput &input);

    void _objectivesFunc(ICustomDataInput &input);
};

#endif