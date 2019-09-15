//
// Created by wxx on 2019/9/15.
//

#ifndef DESIGN_SERVER_MY_GETCH_H
#define DESIGN_SERVER_MY_GETCH_H

#include <stdio.h>
#include <termios.h>
#include <string>

int myGetChar()
{
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

std::string getPwd()
{
    std::string result;
    char pwd[36];
    int c, n = 0;

    while (c != '\n' && c != '\r' && n < 35) {
        c = myGetChar();
        if (c != '\n' && c != 'r' && c != 127) {
            pwd[n] = c;
            printf("*");
            n++;
        }
        else if ((c != '\n' | c != '\r') && c == 127) { //判断是否是回车或则退格
            if (n > 0) {
                n--;
                printf("\b \b");//输出退格
            }
        }
    }

    pwd[n] = '\0';//消除一个多余的回车

    result = pwd;
    return result;
}

#endif //DESIGN_SERVER_MY_GETCH_H
