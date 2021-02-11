#include "../IO/BooleanByteWrapper.h"
#include "StartupActionFinishedMessage.h"

void StartupActionFinishedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StartupActionFinishedMessage(input);
}

void StartupActionFinishedMessage::deserializeAs_StartupActionFinishedMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_actionIdFunc(input);
}

void StartupActionFinishedMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->success = BooleanByteWrapper::getFlag(_box0, 0);
    this->automaticAction = BooleanByteWrapper::getFlag(_box0, 1);
}

void StartupActionFinishedMessage::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readInt();

}

