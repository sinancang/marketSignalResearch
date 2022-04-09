//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include <string>

#ifndef AI_TRADER_GETDATA_H
#define AI_TRADER_GETDATA_H

class Data{
    std::string name;
    std::string data;

public:
    virtual double getStandardDev() = 0;
    virtual double getMean() = 0;
};

#endif //AI_TRADER_GETDATA_H
