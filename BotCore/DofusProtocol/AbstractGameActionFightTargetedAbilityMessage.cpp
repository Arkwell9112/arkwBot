#include "../IO/BooleanByteWrapper.h"
#include "AbstractGameActionFightTargetedAbilityMessage.h"

void AbstractGameActionFightTargetedAbilityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractGameActionFightTargetedAbilityMessage(input);
}

void AbstractGameActionFightTargetedAbilityMessage::deserializeAs_AbstractGameActionFightTargetedAbilityMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_targetIdFunc(input);
    this->_destinationCellIdFunc(input);
    this->_criticalFunc(input);
}

void AbstractGameActionFightTargetedAbilityMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->silentCast = BooleanByteWrapper::getFlag(_box0, 0);
    this->verboseCast = BooleanByteWrapper::getFlag(_box0, 1);
}

void AbstractGameActionFightTargetedAbilityMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void AbstractGameActionFightTargetedAbilityMessage::_destinationCellIdFunc(ICustomDataInput &input) {
    this->destinationCellId = input.readShort();

}

void AbstractGameActionFightTargetedAbilityMessage::_criticalFunc(ICustomDataInput &input) {
    this->critical = input.readByte();

}

