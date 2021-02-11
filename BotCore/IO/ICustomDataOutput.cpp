#include "ICustomDataOutput.h"
#include "../BotException.h"

void ICustomDataOutput::writeUnsignedShort(unsigned short value) {
    isPosOK(getPos() + 2);
    copyAndInvertData(reinterpret_cast<const char *>(&value), getBuffer(), 2);
    advancePos(2);
}

void ICustomDataOutput::writeUnsignedInt(unsigned int value) {
    isPosOK(getPos() + 4);
    copyAndInvertData(reinterpret_cast<const char *>(&value), getBuffer(), 4);
    advancePos(4);
}

void ICustomDataOutput::writeVariableUnsignedInt(unsigned int value, unsigned int size) {
    if (size < 0 || size > 4) {
        throw BotException(1);
    }

    isPosOK(getPos() + size);
    copyAndInvertData(reinterpret_cast<const char *>(&value), getBuffer(), size);
    advancePos((int) size);
}

void ICustomDataOutput::writeUnsignedByte(unsigned char value) {
    isPosOK(getPos() + 1);
    copyAndInvertData(reinterpret_cast<const char *>(&value), getBuffer(), 1);
    advancePos(1);
}

void ICustomDataOutput::writeBytes(const char *data, unsigned int offset, unsigned int amount) {
    isPosOK(getPos() + amount);
    copyData(&data[offset], getBuffer(), amount);
    advancePos((int) amount);
}

void ICustomDataOutput::writeDouble(double value) {
    isPosOK(getPos() + 8);
    copyAndInvertData(reinterpret_cast<const char *>(&value), getBuffer(), 8);
    advancePos(8);
}