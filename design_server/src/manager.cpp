//
// Created by wxx on 2019/9/15.
//

#include <iostream>

#include "design_server/design_server.h"

using namespace std;
using namespace design_server;

int main() {
    DesignServer server;

    if (!server.init()) {
        cout << "server init failed" << endl;
        return -1;
    }

    server.run();
    return 0;
}