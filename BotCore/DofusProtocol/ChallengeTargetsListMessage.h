#ifndef CHALLENGETARGETSLISTMESSAGE
#define CHALLENGETARGETSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ChallengeTargetsListMessage : public NetworkInterface {
public:
    std::vector<double> targetIds;
    std::vector<int> targetCells;
    unsigned int protocolId = 5314;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChallengeTargetsListMessage(ICustomDataInput &input);

    void _targetIdsFunc(ICustomDataInput &input);

    void _targetCellsFunc(ICustomDataInput &input);
};

#endif