//
// Created by mahee on 2021-05-28.
//

#ifndef SFU_OPEN_SOURCE_BOOTCAMP_ALGO_SESSION_H
#define SFU_OPEN_SOURCE_BOOTCAMP_ALGO_SESSION_H
#include "../session/session.h"

class Algo : public Session{
    Algo(){
        std::cout << "Welcome to Algorithms session!\n";
    }

    void begin() override{
        std::cout << "initiated Algorithms session\n";
    }
};
#endif //SFU_OPEN_SOURCE_BOOTCAMP_ALGO_SESSION_H
