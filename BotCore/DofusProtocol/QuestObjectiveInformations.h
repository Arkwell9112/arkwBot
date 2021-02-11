#ifndef QUESTOBJECTIVEINFORMATIONS
#define QUESTOBJECTIVEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class QuestObjectiveInformations : public NetworkInterface {
public:
    unsigned int objectiveId = 0;
    bool objectiveStatus = false;
    std::vector<std::string> dialogParams;
    unsigned int protocolId = 2312;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestObjectiveInformations(ICustomDataInput &input);

    void _objectiveIdFunc(ICustomDataInput &input);

    void _objectiveStatusFunc(ICustomDataInput &input);

    void _dialogParamsFunc(ICustomDataInput &input);
};

#endif