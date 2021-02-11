#include "AccountInformationsUpdateMessage.h"

void AccountInformationsUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccountInformationsUpdateMessage(input);
}

void AccountInformationsUpdateMessage::deserializeAs_AccountInformationsUpdateMessage(ICustomDataInput &input) {
    this->_subscriptionEndDateFunc(input);
}

void AccountInformationsUpdateMessage::_subscriptionEndDateFunc(ICustomDataInput &input) {
    this->subscriptionEndDate = input.readDouble();

}

