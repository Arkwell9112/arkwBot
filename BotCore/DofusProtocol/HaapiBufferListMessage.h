#ifndef HAAPIBUFFERLISTMESSAGE
#define HAAPIBUFFERLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "BufferInformation.h"

class HaapiBufferListMessage : public NetworkInterface {
public:
    std::vector<BufferInformation> buffers;
    unsigned int protocolId = 115;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiBufferListMessage(ICustomDataInput &input);

    void _buffersFunc(ICustomDataInput &input);
};

#endif