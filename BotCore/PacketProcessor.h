#ifndef ARKWBOT_PACKETPROCESSOR_H
#define ARKWBOT_PACKETPROCESSOR_H

#include "PacketParser.h"
#include "Packet.h"
#include <list>

class PacketProcessor {
public:
    static PacketProcessor &getInstance();

    unsigned int getInstanceID();

    void processPackets(unsigned int address, bool isSending, char *buf, int len);

private:
    PacketProcessor() : list(), globalInstanceID(0) {};

    PacketParser &retrieveProperParser(unsigned int address, bool isSending);

    static PacketProcessor singleton;

    std::list<PacketParser> list;
    unsigned int globalInstanceID;
};


#endif //ARKWBOT_PACKETPROCESSOR_H