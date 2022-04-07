//
// Created by Sinan Can Gülan on 6.04.2022.
//
#ifndef AI_TRADER_SIGNAL_H
#define AI_TRADER_SIGNAL_H
using namespace std;
#include <string>
#include <vector>

class buySellSignal {
private:

    // isPresent is true if the signal is seen at least once
    bool isPresent;

    // vector of dates where the signal is present
    vector<string> date;

    // buy is true if the signal is a buy signal, false if sell signal
    vector<bool> buy;

    string symbol;

public:
    bool getIsPresent(){
        return isPresent;
    }

    virtual vector<bool> checkPresence(const string& symbol) = 0;
};

#endif //AI_TRADER_SIGNAL_H