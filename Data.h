//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include <string>
#include <vector>
#include <cmath>

#ifndef AI_TRADER_GETDATA_H
#define AI_TRADER_GETDATA_H

class Data{
private:
    const std::string name;

protected:
    std::vector<double> data;

public:
    double getStandardDev() {
        double stdDev = 0;
        double mean = this->getMean();

        for (int i = 0; i < data.size(); i++){
            stdDev += pow(data[i] - mean, 2);
        }

        return stdDev / data.size();
    }
    double getMean(){
        double sum = 0;
        for (int i = 0; i < data.size(); i++){
            sum += data[i];
        }
        return sum / data.size();
    }
};

#endif //AI_TRADER_GETDATA_H
