#ifndef ARKWBOT_ICUSTOMDATAINPUT_H
#define ARKWBOT_ICUSTOMDATAINPUT_H

#include "IDataIO.h"
#include <string>

class ICustomDataInput : public IDataIO {
public:
    ICustomDataInput(unsigned int size, char *buffer) : IDataIO(size, buffer) {};

    bool readBoolean();

    char readByte();

    void readBytes(char *_buffer, unsigned int offset, unsigned int amount);

    double readDouble();

    float readFloat();

    int readInt();

    short readShort();

    unsigned char readUnsignedByte();

    unsigned int readUnsignedInt();

    unsigned short readUnsignedShort();

    std::string readUTF();

    std::string readUTFBytes(unsigned int amount);

    int readVarInt();

    unsigned int readVarUhInt();

    short readVarShort();

    unsigned short readVarUhShort();

    double readVarLong();

    double readVarUhLong();

    unsigned int readVariableUnsignedInt(unsigned int size);

private:
    long long readVarPreLong();

    static long long constructVarLong(unsigned int high, unsigned int low);
};

#endif //ARKWBOT_ICUSTOMDATAINPUT_H