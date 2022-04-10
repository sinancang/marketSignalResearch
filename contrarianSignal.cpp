//
// Created by Sinan Can Gülan on 7.04.2022.
//
#include "signal.h"
#include "contrarianSignal.h"

contrarianSignal::contrarianSignal(double& thresholdStdDevParameter) {
    thresholdStdDev = thresholdStdDevParameter;
}

// checks presence of contrarian signal in a given data set
vector<bool> contrarianSignal::checkPresence(vector<double> percentChangeData, vector<int> volumeData) {
    return {};
}