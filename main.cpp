//
// Created by Sinan Can Gülan on 9.04.2022.
//
#include "parseCSV.h"
#include "percentPriceData.h"
#include "contrarianSignal.h"
#include "Data.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    // parse CSV to get raw data
    parseCSV *s1 = new parseCSV("LIT");
    vector<vector<string>> data = s1->getData();

    // convert raw data to percent change in price data
    percentPriceData *p = new percentPriceData(data);

    // print for testing purposes
    for (int i = 0; i < p->getNumData(); i++){
        cout << p->getDatapoint(i) << endl;
    }

    // extract volume data
    vector<int> volumeData;
    for (int i = 0; i < data[6].size(); i++){
        volumeData[i] = stoi(data[6][i]);
    }

    // feed into contrarian signal object to look for signals
    // might want to move code only relevant to the contrarian signal to its class
    // contrarianSignal *cs = new contrarianSignal(2.0);
    return 0;
}