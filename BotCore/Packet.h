#ifndef ARKWBOT_PACKET_H
#define ARKWBOT_PACKET_H


class Packet {
public:
    Packet(unsigned int _packetID, unsigned int _instanceID, char *_realInstanceID, unsigned int _packetSize,
           const char *_data);

    Packet() : packetID(0), instanceID(0), realInstanceID(nullptr), packetSize(0), data(nullptr) {};

    Packet(const Packet &packet);

    ~Packet();

    unsigned int getPacketID() const;

    unsigned int getInstanceID() const;

    unsigned int getPacketSize() const;

    char *getData() const;

private:
    char *data;
    unsigned int packetID;
    unsigned int instanceID;
    char *realInstanceID;
    unsigned int packetSize;
};


#endif //ARKWBOT_PACKET_H