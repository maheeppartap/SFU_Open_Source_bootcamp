//
// Created by mahee on 2021-05-28.
//

#ifndef SFU_OPEN_SOURCE_BOOTCAMP_SESSION_H
#define SFU_OPEN_SOURCE_BOOTCAMP_SESSION_H

class Session{
public:
    Session()= default;

    virtual void begin(){
        std::cout << "running empty begin()\n";
    }
};
#endif //SFU_OPEN_SOURCE_BOOTCAMP_SESSION_H
