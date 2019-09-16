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
using Poco::Redis::BulkString;

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

std::string RedisControl::getOneData(const std::string table_name, const std::string item) {
    return getHashItem(client_, table_name, item);
}

map<string, string> RedisControl::getHashAll(Poco::Redis::Client &client, const std::string& name) {
    map<string, string> result;

    Array cmd;

    cmd << "HGETALL" << name;

    try {
        Array responses = client.execute<Array>(cmd);
        for (int i = 0; i < responses.size(); i += 2) {
//            cout << responses.get<BulkString>(i) << endl;
            string item_name = responses.get<BulkString>(i);
            string item_data = responses.get<BulkString>(i+1);
            result[item_name] = item_data;
        }
    } catch (Poco::BadCastException &e) {
        cout << e.displayText() << endl;
    } catch (Poco::Redis::RedisException &e) {
        cout << e.displayText() << endl;
    }

    return  result;
}

string RedisControl::getHashItem(Poco::Redis::Client &client, const std::string& name, const std::string& item) {
    Array cmd;

    cmd << "HGET" << name << item;

    string result = "";
    BulkString response;

    try {
        response = client.execute<BulkString>(cmd);
        result = response.value();
    } catch (Poco::BadCastException &e) {
        cout << e.displayText() << endl;
    } catch (Poco::Redis::RedisException &e) {
        cout << e.displayText() << endl;
    } catch (...) {
        return "";
    }

    return result;
}