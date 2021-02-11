#ifndef VERSION
#define VERSION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class Version : public NetworkInterface {
public:
    unsigned int major = 0;
    unsigned int minor = 0;
    unsigned int code = 0;
    unsigned int build = 0;
    unsigned int buildType = 0;
    unsigned int protocolId = 866;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_Version(ICustomDataInput &input);

    void _majorFunc(ICustomDataInput &input);

    void _minorFunc(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);

    void _buildFunc(ICustomDataInput &input);

    void _buildTypeFunc(ICustomDataInput &input);
};

#endif