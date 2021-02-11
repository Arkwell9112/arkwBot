#ifndef INTERACTIVEELEMENTSKILL
#define INTERACTIVEELEMENTSKILL

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class InteractiveElementSkill : public NetworkInterface {
public:
    unsigned int skillId = 0;
    unsigned int skillInstanceUid = 0;
    unsigned int protocolId = 7363;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveElementSkill(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);

    void _skillInstanceUidFunc(ICustomDataInput &input);
};

#endif