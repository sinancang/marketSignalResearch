//
// Created by Sinan Can Gülan on 9.04.2022.
//
#include "parseCSV.h"
#include <string>
#include <vector>
using namespace std;

int main(){
    // parse CSV to get raw data
    parseCSV *s1 = new parseCSV("AMD");
    vector<vector<string>> data = s1->getData();

    // feed into percentpricedata to convert data


    // feed into contrariansignal to look for signals
    return 0;
}