#ifndef ARKWBOT_IDATAIO_H
#define ARKWBOT_IDATAIO_H

class IDataIO {
public:
    IDataIO(unsigned int _size, char *_buffer) : pos(0), size(_size), buffer(_buffer) {};

    unsigned int getPos() const;

    unsigned int getSize() const;

    void setPos(unsigned int position);

    void advancePos(int amount);

    void isPosOK(unsigned int position) const;

    bool isEnd() const;

    static void copyData(const char *origin, char *destination, unsigned int len);

    static void copyAndInvertData(const char *origin, char *destination, unsigned int len);

    char *getBuffer() const;

private:
    unsigned int pos;
    unsigned int size;
    char *buffer;
};

#endif //ARKWBOT_IDATAIO_H