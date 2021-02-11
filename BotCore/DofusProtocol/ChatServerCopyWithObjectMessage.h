#ifndef CHATSERVERCOPYWITHOBJECTMESSAGE
#define CHATSERVERCOPYWITHOBJECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"
#include "ChatServerCopyMessage.h"

class ChatServerCopyWithObjectMessage : public ChatServerCopyMessage {
public:
    std::vector<ObjectItem> objects;
    unsigned int protocolId = 391;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatServerCopyWithObjectMessage(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);
};

#endif