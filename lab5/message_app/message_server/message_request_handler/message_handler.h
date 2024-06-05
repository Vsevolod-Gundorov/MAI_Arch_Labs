#ifndef MESSAGEHANDLER_H
#define MESSAGEHANDLER_H

#include <string>

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/JSON/Parser.h>

class MessageHandler : public Poco::Net::HTTPRequestHandler{
    private:       
        Poco::JSON::Parser _jsonParser;

        static bool CheckSaveData(const Poco::JSON::Object::Ptr &json, std::string &reason);
        static bool CheckGetDialogData(const long &user_id, const bool &isSecondUserIdProvided, const long &secondUserId, std::string &reason);
        static bool CheckUpdateData(const bool &isIdProvided, const long &id, const Poco::JSON::Object::Ptr &json, std::string &reason);

    public:
        void handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) override;
};

#endif // MESSAGEHANDLER_H