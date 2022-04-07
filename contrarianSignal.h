//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "signal.h"

#ifndef AI_TRADER_CONTRARIANSIGNAL_H
#define AI_TRADER_CONTRARIANSIGNAL_H

class contrarianSignal: public buySellSignal{
public:
    contrarianSignal() {}

    vector<bool> checkPresence(const std::string& symbolName) override{
        // get percent increase/decrease data, look for points where std.dev is larger than 1.5
        // get volume data, look for points where std.dev is larger than 1.5
        // if the days match, add them to resulting vector to return it
    }
};

#endif //AI_TRADER_CONTRARIANSIGNAL_H