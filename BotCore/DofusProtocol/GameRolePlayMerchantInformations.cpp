#include "../ProtocolTypeManager.h"
#include "GameRolePlayMerchantInformations.h"

void GameRolePlayMerchantInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayMerchantInformations(input);
}

void GameRolePlayMerchantInformations::deserializeAs_GameRolePlayMerchantInformations(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    HumanOption _item2;
    GameRolePlayNamedActorInformations::deserialize(input);
    this->_sellTypeFunc(input);
    unsigned int _optionsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _optionsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<HumanOption>(input, _id2);
        this->options.push_back(_item2);
    }
}

void GameRolePlayMerchantInformations::_sellTypeFunc(ICustomDataInput &input) {
    this->sellType = input.readByte();

}

void GameRolePlayMerchantInformations::_optionsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    HumanOption _item = ProtocolTypeManager::getObject<HumanOption>(input, _id);
    _item.deserialize(input);
    this->options.push_back(_item);
}

