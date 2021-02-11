#include "../ProtocolTypeManager.h"
#include "PrismsListMessage.h"

void PrismsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismsListMessage(input);
}

void PrismsListMessage::deserializeAs_PrismsListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    PrismSubareaEmptyInfo _item1;
    unsigned int _prismsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _prismsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<PrismSubareaEmptyInfo>(input, _id1);
        this->prisms.push_back(_item1);
    }
}

void PrismsListMessage::_prismsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    PrismSubareaEmptyInfo _item = ProtocolTypeManager::getObject<PrismSubareaEmptyInfo>(input, _id);
    _item.deserialize(input);
    this->prisms.push_back(_item);
}

