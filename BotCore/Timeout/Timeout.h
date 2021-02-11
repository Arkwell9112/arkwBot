#ifndef ARKWBOT_TIMEOUT_H
#define ARKWBOT_TIMEOUT_H

#include <thread>
#include <mutex>
#include <condition_variable>
#include "TimeoutInterface.h"

class Timeout {
public:
    Timeout(TimeoutInterface &_listener, unsigned int _delay);

    Timeout() : listener(nullptr), delay(0), mtx(), cv(), t(), isEnable(false), isTrigger(false) {};

    bool cancelTimeOut();

private:
    void process();

    TimeoutInterface *listener;

    unsigned int delay;

    std::mutex mtx;

    std::condition_variable cv;

    std::thread t;

    bool isEnable;

    bool isTrigger;
};


#endif //ARKWBOT_TIMEOUT_H
