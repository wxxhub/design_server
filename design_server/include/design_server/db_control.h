//
// Created by wxx on 2019/9/15.
//

#ifndef DESIGN_SERVER_DB_CONTROL_H
#define DESIGN_SERVER_DB_CONTROL_H

#include <string>

#include "design_server/singleton.h"

namespace design_server {

class DbControl {
public:
    virtual bool init() = 0;
    virtual std::string getOneData(const std::string table_name, const std::string item) = 0;
};

}

#endif //DESIGN_SERVER_DB_CONTROL_H
