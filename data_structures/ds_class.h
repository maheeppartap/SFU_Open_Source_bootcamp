
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

        /*
         * Day 1:
         * explain the entire bootcamp.
         * When do you use classes?
         * Think of a a class as every addressable object of your code. For example, let's look at a bus.
         *  What parts make up a bus, that you need to be able address on a higher level? Engine, seats, driver, door
         *  steering wheel, the actual wheels etc. Now think as you would think when you were 5. If I asked you to draw
         *  a bus, you would have to draw these things. Since all of these are addressable and will need tuning like colours,
         *  and other stuff, let's create their classes.
         *  In constructor, when you start, what do you get? When I say door, you get a door. It is going to be some
         *  color, and will either be open, or closed. Don't get philosophical with me.
         */

        /*
         * Day 2:
         *  - start with nested classes, take these bus classes and put them all inside the bus class
         *  - limiting scope of classes and variables
         *  - reason: Prefer to keep things confined to what they are used for
         *  - since bus controls these things, makes sense to put them inside
         *  - Start with explaining concepts of extending with the example of an engine
         *  - all engines are different but essentially share some common attributes which every engine has.
         *  - Like horsepower, or they all even start up, but will have different ways of starting up.
         *  - So makes sense to create a base engine class.
         *  - Now move over to the code you wrote for the bootcamp, and show how it's useful for the hack you created
         *  - Make sure you talk about virtual functions
         */
    }

};

class door{
private:
    std::string color;
    bool isOpen;
public:
    door(auto col, auto is_open): color(col), isOpen(is_open){
        // another way is in function
    }
};

class engine{
private:
    std::string type;
public:
    engine() = default;
};


class driver{
private:
    std::string sex;    //male, female, non-binary etc...
    bool awake; //please be
public:
    driver(auto sex_, auto awake_){
        this->sex = sex_;
        this->awake = awake_;
    }
};

class bus{
    // make use of all these variables.
};

#endif //SFU_OPEN_SOURCE_BOOTCAMP_DS_CLASS_H
