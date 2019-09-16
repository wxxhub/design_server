//
// Created by wxx on 2019/9/15.
//

#include <iostream>

#include "design_server/design_server.h"
#include "design_server/redis_control.h"

#include "login/login.pb.h"

using namespace std;
using namespace design_server;

using namespace boost::asio;
using namespace boost::posix_time;

static size_t read_complete(char *buff, const boost::system::error_code &err, size_t bytes);

DesignServer::DesignServer()
    : LOGIN_PORT(6666) {
    db_control_ = RedisControl::getInstance();
}

DesignServer::~DesignServer() {
    RedisControl::destroyInstance();
}

bool DesignServer::init() {
    return db_control_->init();
}

void DesignServer::run() {
    ip::tcp::acceptor acceptor(service_, ip::tcp::endpoint(ip::tcp::v4(), LOGIN_PORT));

    char buff[1024];


    while (true) {
        ip::tcp::socket sock(service_);
        acceptor.accept(sock);

        string reply = "";

        string find_result = "";

        try {
            int bytes = sock.read_some(buffer(buff));

            cout << "I receive size: " << bytes << "buff:" << buff << endl;
            design::User user;

            bool result = user.ParseFromArray(buff, bytes);
            if (result) {
                string name = user.name();
                string pwd = user.pwd();
                cout << "name: " << name << "; pwd:" << pwd << endl;

                find_result = db_control_->getOneData(name, "pwd");
                if (find_result == pwd) {
                    reply = "OK";
                } else {
                    reply = "user or password false!";
                }
            } else {
                cout << "can't Parse!"<< endl;
                reply = "LOGIN_FAILE";
            }

        } catch(...) {
            cout << "recive faile" << endl;
        }

        sock.write_some(buffer(reply));
        sock.close();
    }
}

static  size_t read_complete(char *buff, const boost::system::error_code &err, size_t bytes) {
    if (err)
        return 0;

    bool found = std::find(buff, buff + bytes, '\n') < buff + bytes;

    return found ? 0 : 1;
}