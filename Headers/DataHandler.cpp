//
// Created by lukasz on 3/20/16.
//

#include "DataHandler.h"

DataHandler::DataHandler() {

}

void DataHandler::showInput() {
    for (auto &n: inputData)
    {
        std::cout << n << std::endl;
    }
}



