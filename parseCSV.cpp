//
// Created by Sinan Can Gülan on 9.04.2022.
//
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class parseCSV {
private:
    const vector<vector<string>> *data;

public:
    parseCSV(string symbolname){
        string fname = symbolname + ".csv";
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
                content.push_back(row);
            }
        } else {
            cout << "Could not open file!" << endl;
        }

        data = &content;
    }

    vector<vector<string>> getData(){
        return *data;
    }

};
