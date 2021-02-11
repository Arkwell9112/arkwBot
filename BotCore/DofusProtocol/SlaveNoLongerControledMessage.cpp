#include "SlaveNoLongerControledMessage.h"

void SlaveNoLongerControledMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SlaveNoLongerControledMessage(input);
}

void SlaveNoLongerControledMessage::deserializeAs_SlaveNoLongerControledMessage(ICustomDataInput &input) {
    this->_masterIdFunc(input);
    this->_slaveIdFunc(input);
}

void SlaveNoLongerControledMessage::_masterIdFunc(ICustomDataInput &input) {
    this->masterId = input.readDouble();

}

void SlaveNoLongerControledMessage::_slaveIdFunc(ICustomDataInput &input) {
    this->slaveId = input.readDouble();

}

