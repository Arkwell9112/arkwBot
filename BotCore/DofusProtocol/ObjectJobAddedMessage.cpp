#include "ObjectJobAddedMessage.h"

void ObjectJobAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectJobAddedMessage(input);
}

void ObjectJobAddedMessage::deserializeAs_ObjectJobAddedMessage(ICustomDataInput &input) {
    this->_jobIdFunc(input);
}

void ObjectJobAddedMessage::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

