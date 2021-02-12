#ifndef ARKWBOT_BOTEXCEPTION_H
#define ARKWBOT_BOTEXCEPTION_H

#include <exception>
#include <string>

class BotException : public std::exception {
public:
    explicit BotException(int _code);

    const std::string &getMessage() const;

private:
    int code;
    std::string message;
};


#endif //ARKWBOT_BOTEXCEPTION_H