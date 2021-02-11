#ifndef TREASUREHUNTMESSAGE
#define TREASUREHUNTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "TreasureHuntStep.h"
#include "TreasureHuntFlag.h"

class TreasureHuntMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    double startMapId = 0;
    std::vector<TreasureHuntStep> knownStepsList;
    unsigned int totalStepCount = 0;
    unsigned int checkPointCurrent = 0;
    unsigned int checkPointTotal = 0;
    int availableRetryCount = 0;
    std::vector<TreasureHuntFlag> flags;
    unsigned int protocolId = 5745;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _startMapIdFunc(ICustomDataInput &input);

    void _knownStepsListFunc(ICustomDataInput &input);

    void _totalStepCountFunc(ICustomDataInput &input);

    void _checkPointCurrentFunc(ICustomDataInput &input);

    void _checkPointTotalFunc(ICustomDataInput &input);

    void _availableRetryCountFunc(ICustomDataInput &input);

    void _flagsFunc(ICustomDataInput &input);
};

#endif