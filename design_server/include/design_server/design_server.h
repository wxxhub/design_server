//
// Created by wxx on 2019/9/15.
//

#ifndef _DESIGN_SERVER_H_
#define  _DESIGN_SERVER_H_

#include <list>

#include <Poco/Util/ServerApplication.h>

#include <boost/bind.hpp>
#include <boost/asio.hpp>

#include "design_server/db_control.h"

namespace design_server {

class DesignServer {
public:
    DesignServer();
    ~DesignServer();

    bool init();

    void run();

private:
    DbControl *db_control_;

    const int LOGIN_PORT;

    boost::asio::io_service service_;
};

}

#endif /* _DESIGN_SERVER_H_ */