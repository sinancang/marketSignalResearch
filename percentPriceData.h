//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "getData.h"
#ifndef AI_TRADER_PERCENTPRICEDATA_H
#define AI_TRADER_PERCENTPRICEDATA_H
class percentPriceData: public Data{
private:
    std::vector<double> *dataList;

public:
    // constructor to convert raw data to price change percentage data
    percentPriceData(vector<vector<string>> rawData);

    // calculates and returns standard deviation of datalist
    double getStandardDev() override;

    // returns i-th entry of data list
    double getDatapoint(int& i);
};

#endif //AI_TRADER_PERCENTPRICEDATA_H
