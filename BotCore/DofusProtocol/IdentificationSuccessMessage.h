#ifndef IDENTIFICATIONSUCCESSMESSAGE
#define IDENTIFICATIONSUCCESSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class IdentificationSuccessMessage : public NetworkInterface {
public:
    std::string login;
    std::string nickname;
    unsigned int accountId = 0;
    unsigned int communityId = 0;
    bool hasRights = false;
    bool hasConsoleRight = false;
    std::string secretQuestion;
    double accountCreation = 0;
    double subscriptionElapsedDuration = 0;
    double subscriptionEndDate = 0;
    bool wasAlreadyConnected = false;
    unsigned int havenbagAvailableRoom = 0;
    unsigned int protocolId = 9679;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationSuccessMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _loginFunc(ICustomDataInput &input);

    void _nicknameFunc(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _communityIdFunc(ICustomDataInput &input);

    void _secretQuestionFunc(ICustomDataInput &input);

    void _accountCreationFunc(ICustomDataInput &input);

    void _subscriptionElapsedDurationFunc(ICustomDataInput &input);

    void _subscriptionEndDateFunc(ICustomDataInput &input);

    void _havenbagAvailableRoomFunc(ICustomDataInput &input);
};

#endif