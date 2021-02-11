#include "Packet.h"
#include "IO/IDataIO.h"
#include "BotException.h"

Packet::Packet(unsigned int _packetID, unsigned int _instanceID, char *_realInstanceID, unsigned int _packetSize,
               const char *_data) : packetID(_packetID), instanceID(_instanceID), realInstanceID(_realInstanceID),
                                    packetSize(_packetSize), data(new char[_packetSize]) {
    IDataIO::copyData(_data, data, packetSize);
}

unsigned int Packet::getPacketID() const {
    return packetID;
}

unsigned int Packet::getInstanceID() const {
    return instanceID;
}

void Packet::setRealInstanceID(unsigned int _instanceID) {
    if (realInstanceID != nullptr) {
        IDataIO::copyAndInvertData(reinterpret_cast<const char *>(&_instanceID), realInstanceID, 4);
        instanceID = _instanceID;
    } else {
        throw BotException(2);
    }
}

unsigned int Packet::getPacketSize() const {
    return packetSize;
}

char *Packet::getData() const {
    return data;
}

Packet::Packet(const Packet &packet) : packetID(packet.packetID), instanceID(packet.instanceID),
                                       realInstanceID(
                                               packet.realInstanceID), packetSize(packet.packetSize),
                                       data(new char[packet.packetSize]) {
    IDataIO::copyData(packet.data, data, packetSize);
}

Packet::~Packet() {
    delete[] data;
}