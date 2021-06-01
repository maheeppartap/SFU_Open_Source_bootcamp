
#ifndef SFU_OPEN_SOURCE_BOOTCAMP_VECTORS_SESSION_H
#define SFU_OPEN_SOURCE_BOOTCAMP_VECTORS_SESSION_H
#include "../session/session.h"
#include "../utils/include.h"
class Vec: public Session{

public:
    Vec(){
        std::cout << "Welcome to Vectors session!\n";
    }
    void begin(){
        std::cout << "Beginning Vector session\n";

        // declaring a vector is easy
        std::vector<int> array1;
        std::vector<int> array2 = {1, 2, 3, 4, 5};
        std::vector<int> array3 {1, 2, 3, 4, 5};


        // also since cpp 17 there is type deduction, so we can simply leave <int> out and it it will be deduced
        // so if I say something like:
        // std::vector m {'a', 'b'}; this will be stored as std::vector<char>
        // how cool!!!

        /*
         *  now, how to access these elements
         *  Like an array, you can do "array1[1]" to access the second element. Sorry matlab people, we start arrays at 0.
         *  There is a problem with this: There is no bound checking. So this could be undefined behaviour on some
         *  platforms. Not good enough, if we wanted to face these problems we would have stuck to arrays!
         *
         *  So, there is a solution, instead of using that no bound checking way, do array1.at(1);
        */

        /*
         * There is a reason your classes don't let you use vectors, it makes programming in C++ a breeze.
         *
         * EXPLAIN WHAT MEMORY MANAGEMENT IS..
         * You don't have to worry much less about memory leaks in modern C++. Here is a example of what could happen
         * if we never used arrays. - welp_i_leak() and superior_function_no_leak()
         */

        /* vectors can dynamically move memory up or down based on new data. Like a linked list, but very highly optimized
         *  Look at the following code snippet - resizing_my_vector()
         */
        resize_my_vector();
    }

    static void resize_my_vector(){
        std::vector<int> a {1, 3, 45, 45};

        for (i : a) { std:: cout << i << " ";}

        // is a very expensive operation
        a.resize(9);
        for (i : a) { std:: cout << i << " ";}
    }

    static void welp_i_leak(){
        auto array = new int[3] {1, 2, 3};
    }

    static void superior_function_no_leak(){
        std::vector <int> a{1, 3, 4, 5};    // will automagiclaly call it's destructor and free memory
    }
};

#endif //SFU_OPEN_SOURCE_BOOTCAMP_VECTORS_SESSION_H
