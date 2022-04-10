//
// Created by Sinan Can Gülan on 7.04.2022.
//
#ifndef AI_TRADER_PERCENTPRICEDATA_H
#define AI_TRADER_PERCENTPRICEDATA_H
#include "getData.h"
#include <vector>
#include <string>
using namespace std;

class percentPriceData: public Data {
private:
    std::vector<double> data;

public:
    // constructor to convert raw data to price change percentage data
    percentPriceData(vector<vector<string>> rawData);

    // calculates and returns standard deviation of data
    double getStandardDev() override;

    // calculates and returns mean of data
    double getMean() override;

    // returns i-th entry of data list
    double getDatapoint(int i){
        return data[i];
    }

    int getNumData(){
        return data.size();
    }

    vector<double>& getData(){
            return data;
    }
};


#endif //AI_TRADER_PERCENTPRICEDATA_H
