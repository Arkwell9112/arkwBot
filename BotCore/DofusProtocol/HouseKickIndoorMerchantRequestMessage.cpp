#include "HouseKickIndoorMerchantRequestMessage.h"

void HouseKickIndoorMerchantRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseKickIndoorMerchantRequestMessage(input);
}

void
HouseKickIndoorMerchantRequestMessage::deserializeAs_HouseKickIndoorMerchantRequestMessage(ICustomDataInput &input) {
    this->_cellIdFunc(input);
}

void HouseKickIndoorMerchantRequestMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

