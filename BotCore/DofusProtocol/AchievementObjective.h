#ifndef ACHIEVEMENTOBJECTIVE
#define ACHIEVEMENTOBJECTIVE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AchievementObjective : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int maxValue = 0;
    unsigned int protocolId = 8655;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementObjective(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _maxValueFunc(ICustomDataInput &input);
};

#endif