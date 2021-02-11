#ifndef ARKWBOT_ICUSTOMDATAOUTPUT_H
#define ARKWBOT_ICUSTOMDATAOUTPUT_H

#include "IDataIO.h"

class ICustomDataOutput : IDataIO {
public:
    ICustomDataOutput(unsigned int _size, char *_buffer) : IDataIO(_size, _buffer) {};

    void writeUnsignedShort(unsigned short value);

    void writeUnsignedInt(unsigned int value);

    void writeUnsignedByte(unsigned char value);

    void writeVariableUnsignedInt(unsigned int value, unsigned int size);

    void writeBytes(const char *data, unsigned int offset, unsigned int amount);

    void writeDouble(double value);
};


#endif //ARKWBOT_ICUSTOMDATAOUTPUT_H
