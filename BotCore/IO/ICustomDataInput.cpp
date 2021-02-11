#include "ICustomDataInput.h"
#include "../BotException.h"
#include <limits>

bool ICustomDataInput::readBoolean() {
    isPosOK(getPos() + 1);
    bool value = getBuffer()[0] != 0;
    advancePos(1);
    return value;
}

char ICustomDataInput::readByte() {
    isPosOK(getPos() + 1);
    char value = getBuffer()[0];
    advancePos(1);
    return value;
}

void ICustomDataInput::readBytes(char *_buffer, unsigned int offset, unsigned int amount) {
    isPosOK(getPos() + amount);
    copyData(getBuffer(), &_buffer[offset], amount);
    advancePos((int) amount);
}

double ICustomDataInput::readDouble() {
    isPosOK(getPos() + 8);
    double value = 0;
    copyAndInvertData(getBuffer(), reinterpret_cast<char *>(&value), 8);
    advancePos(8);
    return value;
}

float ICustomDataInput::readFloat() {
    isPosOK(getPos() + 4);
    float value = 0;
    copyAndInvertData(getBuffer(), reinterpret_cast<char *>(&value), 4);
    advancePos(4);
    return value;
}

int ICustomDataInput::readInt() {
    isPosOK(getPos() + 4);
    int value = 0;
    copyAndInvertData(getBuffer(), reinterpret_cast<char *>(&value), 4);
    advancePos(4);
    return value;
}

short ICustomDataInput::readShort() {
    isPosOK(getPos() + 2);
    short value = 0;
    copyAndInvertData(getBuffer(), reinterpret_cast<char *>(&value), 2);
    advancePos(2);
    return value;
}

unsigned char ICustomDataInput::readUnsignedByte() {
    unsigned char value = readByte();
    return value;
}

unsigned int ICustomDataInput::readUnsignedInt() {
    unsigned int value = readInt();
    return value;
}

unsigned short ICustomDataInput::readUnsignedShort() {
    unsigned short value = readShort();
    return value;
}

std::string ICustomDataInput::readUTF() {
    unsigned short size = readUnsignedShort();
    return readUTFBytes(size);
}

std::string ICustomDataInput::readUTFBytes(unsigned int amount) {
    isPosOK(getPos() + amount);
    std::string value = std::string(getBuffer(), amount);
    advancePos((int) amount);
    return value;
}

int ICustomDataInput::readVarInt() {
    int offset = 0;
    bool hasNext = false;
    int value = 0;

    while (offset < 32) {
        unsigned int b = readUnsignedByte();
        hasNext = (b & 128) == 128;
        value += ((b & 127) << offset);
        offset += 7;
        if (!hasNext) {
            return value;
        }
    }

    throw BotException(1);
}

unsigned int ICustomDataInput::readVarUhInt() {
    unsigned int value = readVarInt();
    return value;
}

short ICustomDataInput::readVarShort() {
    int offset = 0;
    bool hasNext = false;
    int value = 0;

    while (offset < 16) {
        unsigned int b = readUnsignedByte();
        hasNext = (b & 128) == 128;
        value += ((b & 127) << offset);
        offset += 7;
        if (!hasNext) {
            if (value > SHRT_MAX) {
                value -= USHRT_MAX;
            }
            return (short) value;
        }
    }

    throw BotException(1);
}

unsigned short ICustomDataInput::readVarUhShort() {
    unsigned short value = readVarShort();
    return value;
}

long long ICustomDataInput::constructVarLong(unsigned int high, unsigned int low) {
    long long _high = 0;
    _high |= high;
    _high <<= 32;
    _high |= low;
    return _high;
}

long long ICustomDataInput::readVarPreLong() {
    unsigned int high = 0;
    unsigned int low = 0;
    int offset = 0;
    unsigned int b = 0;

    while (true) {
        b = readUnsignedByte();
        if (offset == 28) {
            break;
        }
        if (b >= 128) {
            low |= (b & 127) << offset;
            offset += 7;
            continue;
        }
        low |= b << offset;
        return constructVarLong(high, low);
    }
    if (b >= 128) {
        b &= 127;
        low |= b << offset;
        high = b >> 4;
        offset = 3;
        while (true) {
            b = readUnsignedByte();
            if (offset < 32) {
                if (b >= 128) {
                    high |= (b & 127) << offset;
                } else {
                    break;
                }
            }
            offset += 7;
        }
        high |= b << offset;
        return constructVarLong(high, low);
    }
    low |= b << offset;
    high = b >> 4;
    return constructVarLong(high, low);
}

double ICustomDataInput::readVarLong() {
    return (double) readVarPreLong();
}

double ICustomDataInput::readVarUhLong() {
    unsigned long long value = readVarPreLong();
    return (double) value;
}

unsigned int ICustomDataInput::readVariableUnsignedInt(unsigned int size) {
    if (size < 0 || size > 4) {
        throw BotException(1);
    }

    unsigned int value = 0;
    isPosOK(getPos() + size);
    copyAndInvertData(getBuffer(), reinterpret_cast<char *>(&value), size);
    advancePos((int) size);
    return value;
}