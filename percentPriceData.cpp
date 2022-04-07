//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "getData.h"
#include "parseCSV.h"
#include <vector>

class percentPriceData: public Data{
private:
    std::vector<double> *dataList;

public:
    percentPriceData(parseCSV parsedData) {
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