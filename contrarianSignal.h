//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "signal.h"

#ifndef AI_TRADER_CONTRARIANSIGNAL_H
#define AI_TRADER_CONTRARIANSIGNAL_H

class contrarianSignal: public buySellSignal{
private:
    double thresholdStdDev;

public:
    // accepts threshold standard deviation to consider as 'out of the ordinary'
    // the signal will look for data points that are at least threshold away from the mean
    contrarianSignal(double& thresholdStdDevParameter);

    // get percent increase/decrease data, look for points where std.dev is larger than threshold
    // get volume data, look for points where std.dev is larger than 1.5
    // if the days match, add them to resulting vector to return it
    vector<bool> checkPresence(vector<double> percentChangeData, vector<int> volumeData);
};

#endif //AI_TRADER_CONTRARIANSIGNAL_H
