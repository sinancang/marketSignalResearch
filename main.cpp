//
// Created by Sinan Can Gülan on 9.04.2022.
//
#include "parseCSV.h"
#include "percentPriceData.h"
#include "getData.h"
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

    for (int i = 0; i < p->getNumData(); i++){
        cout << p->getDatapoint(i) << endl;
    }


    // extract volume data

    // feed into contrarian signal object to look for signals
    return 0;
}