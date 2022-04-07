//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "signal.h"
#include "getData.h"
#include "percentPriceData.h"
#include "parseCSV.h"

class contrarianSignal: public buySellSignal{
private:
    double thresholdStdDev;

public:
    contrarianSignal(double& thresholdStdDevParameter) {
        thresholdStdDev = thresholdStdDevParameter;
    }

    vector<bool> checkPresence(const std::string& symbolName) override{
        // parseCSV data = new parseCSV(symbolName);
        // Data *data1 = new percentPriceData(data);
        // double stdev1 = data1->getStandardDev();

        // TO DO: implement volumeData class
        // Data *data2 = new volumeData(symbolName);
        // double stdev2 = data2->getStandardDev();

        // check for each point if the stdev is larger than threshold
        // if the days match, add them to resulting vector to return it
    }
};