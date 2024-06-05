// #include "message_server/message_server_application.h"

#include <Poco/MongoDB/Database.h>
#include <Poco/MongoDB/QueryRequest.h>
#include <Poco/SharedPtr.h>
#include <Poco/MongoDB/Connection.h>

#include <Poco/MongoDB/RequestMessage.h>
#include <Poco/MongoDB/MessageHeader.h>

#include "message_server/message_server_application.h"

int main(int argc, char*argv[]){

    MessageServerApplication app;
    return app.run(argc, argv);

    return 0;
}