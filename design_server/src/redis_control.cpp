//
// Created by wxx on 2019/9/15.
//

#include <iostream>

#include "design_server/redis_control.h"
#include "design_server/my_getch.h"

using namespace std;
using namespace design_server;

using Poco::Redis::Client;
using Poco::Redis::Array;

bool RedisControl::init() {
    client_.connect("127.0.0.1", 6379);

    cout << "please input pwd:";

    string pwd = getPwd();

    cout << endl;

    if(!authenticate(client_, pwd)) {
        cout << "redis authentication failure!" << endl;
        return false;
    }

    cout << "redis init finished" << endl;

    return true;
}

bool RedisControl::authenticate(Poco::Redis::Client &client, const std::string& pwd) {
    Array cmd;

    cmd << "AUTH" << pwd;
    string response;

    try {
        response = client.execute<std::string>(cmd);
    } catch (...) {
        return false;
    }

    return true;
}

string RedisControl::getHashItem(Poco::Redis::Client &client, const std::string& name, const std::string& item) {
    Array cmd;

    cmd << "HGET" << name << item;

    Poco::Redis::BulkString response;

    try {
        response = client.execute<Poco::Redis::BulkString>(cmd);
    } catch (Poco::BadCastException &e) {
        cout << e.displayText() << endl;
    } catch (Poco::Redis::RedisException &e) {
        cout << e.displayText() << endl;
    } catch (...) {
        return "";
    }

    return response;
}