#include "UpdateSelfAgressableStatusMessage.h"

void UpdateSelfAgressableStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateSelfAgressableStatusMessage(input);
}

void UpdateSelfAgressableStatusMessage::deserializeAs_UpdateSelfAgressableStatusMessage(ICustomDataInput &input) {
    this->_statusFunc(input);
    this->_probationTimeFunc(input);
}

void UpdateSelfAgressableStatusMessage::_statusFunc(ICustomDataInput &input) {
    this->status = input.readByte();

}

void UpdateSelfAgressableStatusMessage::_probationTimeFunc(ICustomDataInput &input) {
    this->probationTime = input.readInt();

}

