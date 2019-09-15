//
// Created by wxx on 2019/9/15.
//

#ifndef _DESIGN_SERVER_H_
#define  _DESIGN_SERVER_H_

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
};

}

#endif /* _DESIGN_SERVER_H_ */