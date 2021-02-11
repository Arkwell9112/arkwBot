#include "../ProtocolTypeManager.h"
#include "ServerSessionConstantsMessage.h"

void ServerSessionConstantsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSessionConstantsMessage(input);
}

void ServerSessionConstantsMessage::deserializeAs_ServerSessionConstantsMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    ServerSessionConstant _item1;
    unsigned int _variablesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _variablesLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<ServerSessionConstant>(input, _id1);
        this->variables.push_back(_item1);
    }
}

void ServerSessionConstantsMessage::_variablesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ServerSessionConstant _item = ProtocolTypeManager::getObject<ServerSessionConstant>(input, _id);
    _item.deserialize(input);
    this->variables.push_back(_item);
}

