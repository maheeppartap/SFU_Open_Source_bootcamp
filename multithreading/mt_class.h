
#ifndef SFU_OPEN_SOURCE_BOOTCAMP_MT_CLASS_H
#define SFU_OPEN_SOURCE_BOOTCAMP_MT_CLASS_H

#include "../utils/include.h"
#include "../session/session.h"


class MultiThreading : public Session{
public:
    MultiThreading(){
        std::cout << "Welcome to the multithreading session!\n";
    }
    void begin() override{
        std::cout << "initiated multithreading session\n";
    }
};
#endif //SFU_OPEN_SOURCE_BOOTCAMP_MT_CLASS_H
