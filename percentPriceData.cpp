//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "getData.h"
#include "parseCSV.h"
#include <vector>
#include <string>
using namespace std;

class percentPriceData: public Data{
private:
    std::vector<double> *dataList;

public:
    percentPriceData(vector<vector<string>> rawData) {
        // fetches open and close from parsed data
        // calculates daily percent price change and stores & stores
    }

    double getStandardDev() override{
        // returns stddev of data list
    }

    double getDatapoint(int& i){
        return dataList->at(i);
    }
};