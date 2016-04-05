//
// Created by lukasz on 3/19/16.
//

#include <string>
#include <bits/ios_base.h>
#include <ios>
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

#ifndef SDIZ_PROJEKT_1_FILEPARSER_H
#define SDIZ_PROJEKT_1_FILEPARSER_H




class FileParser{
private:
    std::ifstream file;

public:
    FileParser(std::string file);
    FileParser();
    void closeFile();

    int getNumber();

    std::vector<int> outputVector();
};


#endif //SDIZ_PROJEKT_1_FILEPARSER_H



