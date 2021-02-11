#include "ExchangeStartedWithStorageMessage.h"

void ExchangeStartedWithStorageMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedWithStorageMessage(input);
}

void ExchangeStartedWithStorageMessage::deserializeAs_ExchangeStartedWithStorageMessage(ICustomDataInput &input) {
    ExchangeStartedMessage::deserialize(input);
    this->_storageMaxSlotFunc(input);
}

void ExchangeStartedWithStorageMessage::_storageMaxSlotFunc(ICustomDataInput &input) {
    this->storageMaxSlot = input.readVarUhInt();

}

