#ifndef ARKWBOT_LOGMANAGER_H
#define ARKWBOT_LOGMANAGER_H

#include <fstream>

class LogManager {
public:
    static LogManager &getInstance();

    void log(const std::string &&log, double printLevel);

    void exLog(const std::string &&log);

    void init();

private:
    LogManager() = default;

    static std::string getTimedString(const std::string &log);

    static LogManager singleton;

    std::ofstream classic;

    std::ofstream extended;
};


#endif //ARKWBOT_LOGMANAGER_H