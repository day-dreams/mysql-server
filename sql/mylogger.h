//
// Created by kakaxi on 2020/9/23.
//

#ifndef MYLOGGER
#define MYLOGGER

#include <string>


#define kakaxi(msg) detail::print(msg,__FILE__,__LINE__);

namespace detail {
    void print(std::string msg, std::string file, int line);
}

#endif