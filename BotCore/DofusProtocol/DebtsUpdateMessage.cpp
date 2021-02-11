#include "../ProtocolTypeManager.h"
#include "DebtsUpdateMessage.h"

void DebtsUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DebtsUpdateMessage(input);
}

void DebtsUpdateMessage::deserializeAs_DebtsUpdateMessage(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    DebtInformation _item2;
    this->_actionFunc(input);
    unsigned int _debtsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _debtsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<DebtInformation>(input, _id2);
        this->debts.push_back(_item2);
    }
}

void DebtsUpdateMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

void DebtsUpdateMessage::_debtsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    DebtInformation _item = ProtocolTypeManager::getObject<DebtInformation>(input, _id);
    _item.deserialize(input);
    this->debts.push_back(_item);
}

