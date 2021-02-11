#ifndef ARKWBOT_NETWORKINTERFACE_H
#define ARKWBOT_NETWORKINTERFACE_H

#include "IO/ICustomDataInput.h"

class NetworkInterface {
public:
    virtual void deserialize(ICustomDataInput &input) = 0;
};

#endif //ARKWBOT_NETWORKINTERFACE_H
