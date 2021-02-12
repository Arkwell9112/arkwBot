#ifndef ARKWBOT_PACKETPROCESSOR_H
#define ARKWBOT_PACKETPROCESSOR_H

#include "PacketParser.h"
#include "Packet.h"
#include <list>

class PacketProcessor {
public:
    static PacketProcessor &getInstance();

    void processPackets(unsigned int address, bool isSending, char *buf, int len);

private:
    PacketProcessor() : list() {};

    PacketParser &retrieveProperParser(unsigned int address, bool isSending);

    static PacketProcessor singleton;

    std::list<PacketParser> list;
};


#endif //ARKWBOT_PACKETPROCESSOR_H