
#ifndef SFU_OPEN_SOURCE_BOOTCAMP_DS_CLASS_H
#define SFU_OPEN_SOURCE_BOOTCAMP_DS_CLASS_H

#include "../utils/include.h"


class DataStructures : public Session{
public:
    DataStructures(){
        std::cout << "Welcome to the data structures session!\n";
    }
    void begin() override{
        std::cout << "Running data_structures session now\n";



    }
};
#endif //SFU_OPEN_SOURCE_BOOTCAMP_DS_CLASS_H
