//
// Created by lukasz on 3/20/16.
//

#include "FileParser.h"

FileParser::FileParser(std::string file) {

    this->file.open(file,std::ios::out);
    if (this->file.is_open())
    {
        std::cout << "FILe IS loaded" << std::endl;
    }
    else
        std::cout<<"Files cannot be loaded" << std::endl;
}

void FileParser::closeFile() {
    file.close();
}

std::vector<int> FileParser::outputVector() {
    std::vector<int> w;
    std::string tmp;
    std::string tmp1;
    while(getline(file,tmp))
    {

        std::istringstream iss(tmp);
        while(iss >> tmp1){
            w.push_back(std::stoi(tmp1));

        }
    }
    return w;
}

FileParser::FileParser() {


}

int FileParser::getNumber() {

    int tmp;
    printf("Begore loop \n");
    file >> tmp;
    return tmp;
}








