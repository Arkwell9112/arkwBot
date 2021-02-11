#ifndef CHATCLIENTMULTIWITHOBJECTMESSAGE
#define CHATCLIENTMULTIWITHOBJECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"
#include "ChatClientMultiMessage.h"

class ChatClientMultiWithObjectMessage : public ChatClientMultiMessage {
public:
    std::vector<ObjectItem> objects;
    unsigned int protocolId = 7500;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatClientMultiWithObjectMessage(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);
};

#endif