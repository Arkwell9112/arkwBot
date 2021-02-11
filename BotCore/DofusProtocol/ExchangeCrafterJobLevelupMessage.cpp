#include "ExchangeCrafterJobLevelupMessage.h"

void ExchangeCrafterJobLevelupMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCrafterJobLevelupMessage(input);
}

void ExchangeCrafterJobLevelupMessage::deserializeAs_ExchangeCrafterJobLevelupMessage(ICustomDataInput &input) {
    this->_crafterJobLevelFunc(input);
}

void ExchangeCrafterJobLevelupMessage::_crafterJobLevelFunc(ICustomDataInput &input) {
    this->crafterJobLevel = input.readUnsignedByte();

}

