#ifndef ARKWBOT_TIMEOUTINTERFACE_H
#define ARKWBOT_TIMEOUTINTERFACE_H

class TimeoutInterface {
public:
    virtual void timeoutCallBack(void *caller) = 0;
};

#endif //ARKWBOT_TIMEOUTINTERFACE_H