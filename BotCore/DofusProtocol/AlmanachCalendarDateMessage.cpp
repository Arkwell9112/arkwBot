#include "AlmanachCalendarDateMessage.h"

void AlmanachCalendarDateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlmanachCalendarDateMessage(input);
}

void AlmanachCalendarDateMessage::deserializeAs_AlmanachCalendarDateMessage(ICustomDataInput &input) {
    this->_dateFunc(input);
}

void AlmanachCalendarDateMessage::_dateFunc(ICustomDataInput &input) {
    this->date = input.readInt();
}

