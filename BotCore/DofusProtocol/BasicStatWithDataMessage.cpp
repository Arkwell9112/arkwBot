#include "../ProtocolTypeManager.h"
#include "BasicStatWithDataMessage.h"

void BasicStatWithDataMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicStatWithDataMessage(input);
}

void BasicStatWithDataMessage::deserializeAs_BasicStatWithDataMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    StatisticData _item1;
    BasicStatMessage::deserialize(input);
    unsigned int _datasLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _datasLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<StatisticData>(input, _id1);
        this->datas.push_back(_item1);
    }
}

void BasicStatWithDataMessage::_datasFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    StatisticData _item = ProtocolTypeManager::getObject<StatisticData>(input, _id);
    _item.deserialize(input);
    this->datas.push_back(_item);
}

