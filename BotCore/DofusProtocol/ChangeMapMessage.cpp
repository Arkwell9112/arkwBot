#include "ChangeMapMessage.h"
#include "../IO/ICustomDataOutput.h"
#include "../ConfigManager.h"

void ChangeMapMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChangeMapMessage(input);
}

void ChangeMapMessage::deserializeAs_ChangeMapMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
    this->_autopilotFunc(input);
}

void ChangeMapMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void ChangeMapMessage::_autopilotFunc(ICustomDataInput &input) {
    this->autopilot = input.readBoolean();
}

Packet ChangeMapMessage::serialize(double mapID) {
    const unsigned int size = 8 + 1;
    char data[size];
    ICustomDataOutput output(size, data);
    output.writeDouble(mapID);
    output.writeUnsignedByte(0);
    std::string packetName("ChangeMapMessage");
    return Packet(ConfigManager::getInstance().getPacketID(packetName), 0, nullptr, size, data);
}