#ifndef ENTITYTALKMESSAGE
#define ENTITYTALKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class EntityTalkMessage : public NetworkInterface {
public:
    double entityId = 0;
    unsigned int textId = 0;
    std::vector<std::string> parameters;
    unsigned int protocolId = 973;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntityTalkMessage(ICustomDataInput &input);

    void _entityIdFunc(ICustomDataInput &input);

    void _textIdFunc(ICustomDataInput &input);

    void _parametersFunc(ICustomDataInput &input);
};

#endif