#ifndef CHATSERVERWITHOBJECTMESSAGE
#define CHATSERVERWITHOBJECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"
#include "ChatServerMessage.h"

class ChatServerWithObjectMessage : public ChatServerMessage {
public:
    std::vector<ObjectItem> objects;
    unsigned int protocolId = 6310;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatServerWithObjectMessage(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);
};

#endif