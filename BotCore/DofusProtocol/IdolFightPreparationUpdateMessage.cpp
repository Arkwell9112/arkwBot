#include "../ProtocolTypeManager.h"
#include "IdolFightPreparationUpdateMessage.h"

void IdolFightPreparationUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolFightPreparationUpdateMessage(input);
}

void IdolFightPreparationUpdateMessage::deserializeAs_IdolFightPreparationUpdateMessage(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    Idol _item2;
    this->_idolSourceFunc(input);
    unsigned int _idolsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _idolsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<Idol>(input, _id2);
        this->idols.push_back(_item2);
    }
}

void IdolFightPreparationUpdateMessage::_idolSourceFunc(ICustomDataInput &input) {
    this->idolSource = input.readByte();

}

void IdolFightPreparationUpdateMessage::_idolsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    Idol _item = ProtocolTypeManager::getObject<Idol>(input, _id);
    _item.deserialize(input);
    this->idols.push_back(_item);
}

