//
// Created by Sinan Can Gülan on 9.04.2022.
//
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "parseCSV.h"
using namespace std;

parseCSV::parseCSV(string symbol){
    string fname = symbol + ".csv";
    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file (fname, ios::in);
    if (file.is_open()){
        while (getline(file, line)){
            row.clear();

            stringstream str(line);

            while(getline(str, word, ',')){
                row.push_back(word);
            }
            data.push_back(row);
        }
    } else {
        cout << "Could not open file!" << endl;
    }
}

const vector<vector<string>>& parseCSV::getData(){
    return data;
}
