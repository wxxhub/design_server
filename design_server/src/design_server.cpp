//
// Created by wxx on 2019/9/15.
//

#include <iostream>

#include "design_server/design_server.h"
#include "design_server/redis_control.h"

using namespace std;
using namespace design_server;

DesignServer::DesignServer() {
    db_control_ = RedisControl::getInstance();
}

DesignServer::~DesignServer() {
    RedisControl::destroyInstance();
}

bool DesignServer::init() {
    return db_control_->init();
}

void DesignServer::run() {
    cout << "server running ..." << endl;
}