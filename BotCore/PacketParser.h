#ifndef ARKWBOT_PACKETPARSER_H
#define ARKWBOT_PACKETPARSER_H

#include <list>
#include "Packet.h"

class PacketParser {
public:
    PacketParser(unsigned int _address, bool _isSending) : address(_address),
                                                           isSending(_isSending),
                                                           buffer(
                                                                   nullptr),
                                                           bufferLen(0) {};

    PacketParser(const PacketParser &packetParser);

    ~PacketParser();

    void parsePackets(char *buf, int len, std::list<Packet> &list);

    bool equals(unsigned int _address, bool _isSending) const;

private:
    unsigned int address;
    bool isSending;
    char *buffer;
    unsigned int bufferLen;
};

#endif //ARKWBOT_PACKETPARSER_H