#ifndef CLIENTUIOPENEDBYOBJECTMESSAGE
#define CLIENTUIOPENEDBYOBJECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ClientUIOpenedMessage.h"

class ClientUIOpenedByObjectMessage : public ClientUIOpenedMessage {
public:
    unsigned int uid = 0;
    unsigned int protocolId = 307;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ClientUIOpenedByObjectMessage(ICustomDataInput &input);

    void _uidFunc(ICustomDataInput &input);
};

#endif