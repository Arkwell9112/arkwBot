#include "CompassUpdatePvpSeekMessage.h"

void CompassUpdatePvpSeekMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CompassUpdatePvpSeekMessage(input);
}

void CompassUpdatePvpSeekMessage::deserializeAs_CompassUpdatePvpSeekMessage(ICustomDataInput &input) {
    CompassUpdateMessage::deserialize(input);
    this->_memberIdFunc(input);
    this->_memberNameFunc(input);
}

void CompassUpdatePvpSeekMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

void CompassUpdatePvpSeekMessage::_memberNameFunc(ICustomDataInput &input) {
    this->memberName = input.readUTF();
}

