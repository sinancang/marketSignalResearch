//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "Data.h"
#include "percentPriceData.h"
#include <vector>
#include <string>
using namespace std;

// note that the program assumes yahoo finance csv formatting with columns as follows:
// Date, Open, High, Low, Close, Adj Close, Volume

// constructor to initialize percent price data out of raw data
percentPriceData::percentPriceData(vector<vector<string>> rawData) {
    // fetches open and close from parsed data
    for (int i = 1; i < rawData.size(); i++){
        double open = stod(rawData[i][1]);
        double close = stod(rawData[i][4]);

        double percentChange = ((close - open)/open) * 100;

        data.push_back(percentChange);
    }
}