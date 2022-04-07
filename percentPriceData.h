//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "getData.h"
#include "parseCSV.h"
#ifndef AI_TRADER_PERCENTPRICEDATA_H
#define AI_TRADER_PERCENTPRICEDATA_H
class percentPriceData: public Data{
private:
    std::vector<double> *dataList;

public:
    //
    percentPriceData(parseCSV parsedData) {}

    // calculates and returns standard deviation of datalist
    double getStandardDev() override{}

    // returns i-th entry of data list
    double getDatapoint(int& i){}

};
#endif //AI_TRADER_PERCENTPRICEDATA_H
