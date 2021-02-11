#include "PacketProcessor.h"
#include "PacketDispatcher/PacketDispatcher.h"
#include "LogManager.h"
#include "ConfigManager.h"
#include <string>

PacketProcessor PacketProcessor::singleton = PacketProcessor();

PacketProcessor &PacketProcessor::getInstance() {
    return singleton;
}

PacketParser &
PacketProcessor::retrieveProperParser(unsigned int address, bool isSending) {
    auto it = list.begin();
    while (it != list.end()) {
        if (it->equals(address, isSending)) {
            return *it;
        }
        it++;
    }

    list.emplace_back(address, isSending);
    return list.back();
}

void PacketProcessor::processPackets(unsigned int address, bool isSending, char *buf, int len) {
    std::list<Packet> packetList;
    retrieveProperParser(address, isSending).parsePackets(buf, len, packetList);
    auto it = packetList.begin();
    while (it != packetList.end()) {
        LogManager::getInstance().exLog("PacketID: " + std::to_string(it->getPacketID()) + " PacketSize: " +
                                        std::to_string(it->getPacketSize()) + " PacketInstanceID: " +
                                        std::to_string(it->getInstanceID()) + " PacketName: " +
                                        ConfigManager::getInstance().getPacketName(it->getPacketID()));
        PacketDispatcher::getInstance().dispatchPacket(*it);
        it++;
    }
}

unsigned int PacketProcessor::getInstanceID() {
    globalInstanceID++;
    return globalInstanceID;
}