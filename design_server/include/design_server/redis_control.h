//
// Created by wxx on 2019/9/15.
//

#ifndef DESIGN_SERVER_REDISCONTROL_H
#define DESIGN_SERVER_REDISCONTROL_H

#include <string>

#include <vector>
#include <map>

#include <Poco/Redis/Client.h>
#include <Poco/Redis/Array.h>

#include "design_server/singleton.h"
#include "design_server/db_control.h"

namespace  design_server {

class RedisControl : public design_server::DbControl, public Singleton<RedisControl> {
public:
    RedisControl(){};
    ~RedisControl(){};
    bool init();

    std::string getOneData(const std::string table_name, const std::string item);
private:
    Poco::Redis::Client client_;

    bool authenticate(Poco::Redis::Client &client, const std::string& pwd);
    std::map<std::string, std::string> getHashAll(Poco::Redis::Client &client, const std::string& name);
    std::string getHashItem(Poco::Redis::Client &client, const std::string& name, const std::string& item);
};

}

#endif //DESIGN_SERVER_REDISCONTROL_H
