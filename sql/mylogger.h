//
// Created by kakaxi on 2020/9/23.
//

#ifndef MYSQL_MYLOGGER_H
#define MYSQL_MYLOGGER_H

#include <iostream>
#include<fstream>

std::ofstream f("/home/kakaxi/Desktop/mysql.log", std::ios::out | std::ios::app);

void log(std::string msg) {
    f << msg << std::endl;
}

#endif //MYSQL_MYLOGGER_H
