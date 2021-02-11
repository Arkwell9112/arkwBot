#include "IDataIO.h"
#include "../BotException.h"

unsigned int IDataIO::getPos() const {
    return pos;
}

unsigned int IDataIO::getSize() const {
    return size;
}

void IDataIO::setPos(unsigned int position) {
    isPosOK(position);
    pos = position;
}

void IDataIO::advancePos(int amount) {
    isPosOK(pos + amount);
    pos += amount;
}

void IDataIO::isPosOK(unsigned int position) const {
    if (position < 0 || position > size) {
        throw BotException(0);
    }
}

void IDataIO::copyData(const char *origin, char *destination, unsigned int len) {
    for (int i = 0; i < len; i++) {
        destination[i] = origin[i];
    }
}

void IDataIO::copyAndInvertData(const char *origin, char *destination, unsigned int len) {
    for (int i = 0; i < len; i++) {
        destination[i] = origin[len - i - 1];
    }
}

char *IDataIO::getBuffer() const {
    return &buffer[pos];
}

bool IDataIO::isEnd() const {
    return pos == size;
}
