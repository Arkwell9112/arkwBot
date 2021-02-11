#ifndef STARTUPACTIONADDOBJECT
#define STARTUPACTIONADDOBJECT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "ObjectItemInformationWithQuantity.h"
#include "ObjectItem.h"
#include "Item.h"

class StartupActionAddObject : public NetworkInterface {
public:
    unsigned int uid = 0;
    std::string title;
    std::string text;
    std::string descUrl;
    std::string pictureUrl;
    std::vector<ObjectItemInformationWithQuantity> items;
    unsigned int protocolId = 7942;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionAddObject(ICustomDataInput &input);

    void _uidFunc(ICustomDataInput &input);

    void _titleFunc(ICustomDataInput &input);

    void _textFunc(ICustomDataInput &input);

    void _descUrlFunc(ICustomDataInput &input);

    void _pictureUrlFunc(ICustomDataInput &input);

    void _itemsFunc(ICustomDataInput &input);
};

#endif