#ifndef CHATCLIENTPRIVATEWITHOBJECTMESSAGE
#define CHATCLIENTPRIVATEWITHOBJECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"
#include "ChatClientPrivateMessage.h"

class ChatClientPrivateWithObjectMessage : public ChatClientPrivateMessage {
public:
    std::vector<ObjectItem> objects;
    unsigned int protocolId = 9448;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatClientPrivateWithObjectMessage(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);
};

#endif