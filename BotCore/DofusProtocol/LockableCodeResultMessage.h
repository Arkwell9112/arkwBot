#ifndef LOCKABLECODERESULTMESSAGE
#define LOCKABLECODERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LockableCodeResultMessage : public NetworkInterface {
public:
    unsigned int result = 0;
    unsigned int protocolId = 1111;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableCodeResultMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif