#include "PacketParser.h"
#include "IO/IDataIO.h"
#include "IO/ICustomDataInput.h"
#include "BotException.h"

bool PacketParser::equals(unsigned int _address, bool _isSending) const {
    return _address == address && _isSending == isSending;
}

void PacketParser::parsePackets(char *buf, int len, std::list<Packet> &list) {
    if (len <= 0) {
        return;
    }

    char *specialBuffer = nullptr;
    char *currentBuffer = buf;
    unsigned int currentLen = len;

    if (buffer != nullptr) {
        currentLen = len + bufferLen;
        specialBuffer = new char[currentLen];
        IDataIO::copyData(buffer, specialBuffer, bufferLen);
        IDataIO::copyData(buf, &specialBuffer[bufferLen], len);
        currentBuffer = specialBuffer;
        delete[] buffer;
        buffer = nullptr;
    }

    ICustomDataInput input(currentLen, currentBuffer);
    unsigned int lastPos = input.getPos();

    bool isFinish = false;
    while (!isFinish) {
        try {
            lastPos = input.getPos();
            unsigned int staticHeader = input.readUnsignedShort();
            unsigned int packetID = staticHeader >> 2;
            unsigned int packetSizeSize = staticHeader & 3;
            unsigned int instanceID = 0;
            char *realInstanceID = nullptr;
            if (isSending) {
                realInstanceID = input.getBuffer();
                instanceID = input.readUnsignedInt();
            }
            unsigned int packetSize = input.readVariableUnsignedInt(packetSizeSize);
            input.isPosOK(input.getPos() + packetSize);
            list.emplace_back(packetID, instanceID, realInstanceID, packetSize, input.getBuffer());
            input.advancePos((int) packetSize);
        } catch (BotException &e) {
            isFinish = true;
        }
    }

    if (!input.isEnd()) {
        bufferLen = input.getSize() - lastPos;
        buffer = new char[bufferLen];
        input.setPos(lastPos);
        input.readBytes(buffer, 0, bufferLen);
    }

    delete[] specialBuffer;
}

PacketParser::PacketParser(const PacketParser &packetParser) : address(packetParser.address),
                                                               isSending(packetParser.isSending),
                                                               bufferLen(packetParser.bufferLen),
                                                               buffer(nullptr) {
    if (packetParser.buffer != nullptr) {
        buffer = new char[bufferLen];
        IDataIO::copyData(packetParser.buffer, buffer, bufferLen);
    }
}

PacketParser::~PacketParser() {
    delete[] buffer;
}