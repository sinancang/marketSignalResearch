//
// Created by Sinan Can Gülan on 7.04.2022.
//

#ifndef AI_TRADER_PARSECSV_H
#define AI_TRADER_PARSECSV_H
#include <string>
#include <vector>
using namespace std;

// given a symbol name parses CSV
// TO DO: parse csv and store data,
// access function for data
class parseCSV {
private:
    vector<vector<string>> data;

public:
    const vector<vector<string>>& getData();
    parseCSV(string symbol);
};


#endif //AI_TRADER_PARSECSV_H
