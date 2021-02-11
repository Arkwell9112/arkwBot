#ifndef LOCKABLEUSECODEMESSAGE
#define LOCKABLEUSECODEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class LockableUseCodeMessage : public NetworkInterface {
public:
    std::string code;
    unsigned int protocolId = 7703;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableUseCodeMessage(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);
};

#endif