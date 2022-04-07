//
// Created by Sinan Can Gülan on 7.04.2022.
//

#ifndef AI_TRADER_PARSECSV_H
#define AI_TRADER_PARSECSV_H
#include <vector>
#include <string>

// given a symbol name parses CSV
// TO DO: parse csv and store data,
// access function for data
class parseCSV {
private:
    std::vector<std::vector<std::string>> data;

public:
    virtual void parseData(const std::string& symbolname) = 0;

    parseCSV(const string& symbol) {}
};


#endif //AI_TRADER_PARSECSV_H
