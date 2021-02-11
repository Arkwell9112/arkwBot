#ifndef LOCKABLECHANGECODEMESSAGE
#define LOCKABLECHANGECODEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class LockableChangeCodeMessage : public NetworkInterface {
public:
    std::string code;
    unsigned int protocolId = 767;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableChangeCodeMessage(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);
};

#endif