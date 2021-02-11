#include "Timeout.h"
#include "../LockManager.h"

void Timeout::process() {
    std::unique_lock<std::mutex> lck(mtx);
    cv.wait_for(lck, std::chrono::milliseconds(delay));
    isTrigger = isEnable;
    bool localIsTrigger = isTrigger;
    lck.unlock();
    if (localIsTrigger) {
        LockManager::getInstance().getLock().lock();
        listener->timeoutCallBack(this);
        LockManager::getInstance().getLock().unlock();
    }
}

bool Timeout::cancelTimeOut() {
    std::unique_lock<std::mutex> lck(mtx);
    isEnable = isTrigger;
    bool localIsEnable = isEnable;
    lck.unlock();
    if (!localIsEnable) {
        cv.notify_all();
        if (t.joinable()) {
            t.join();
        }
        return true;
    }

    return false;
}

Timeout::Timeout(TimeoutInterface &_listener, unsigned int _delay) : listener(&_listener), delay(_delay), mtx(),
                                                                     isEnable(true), isTrigger(false), cv(), t() {
    t = std::thread(&Timeout::process, this);
}