#ifndef ABSTRACTSOCIALGROUPINFOS
#define ABSTRACTSOCIALGROUPINFOS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AbstractSocialGroupInfos : public NetworkInterface {
public:
    unsigned int protocolId = 6801;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractSocialGroupInfos(ICustomDataInput &input);
};

#endif