//
// Created by mahee on 2021-05-28.
//

#ifndef SFU_OPEN_SOURCE_BOOTCAMP_ALGO_SESSION_H
#define SFU_OPEN_SOURCE_BOOTCAMP_ALGO_SESSION_H
#include "../session/session.h"
#include "../utils/include.h"

class Algo : public Session{
public:
    Algo(){
        std::cout << "Welcome to Algorithms session!\n";
        /*
         * First we talk about some more data structures
         * std::list<int> lis;
         * std::set<int> se;    // to only store unique values
         * std::map<int, std::string> ma; // like a python dictionary
         */
    }
    static bool test(int i) {return i % 2 == 0;}
    void begin() override{
        std::cout << "initiated Algorithms session\n";

        /*
         * start with the most basic algorithm: find()
         * What's important is understand an iterator.
         * An iterator is designed to make iterating over a container type easier.
         * Iterators offer an interface to the container, and make traversal algorithms independent of type of container
         * Almost all algorithms use iterators as an interface to interact with data structures
        */
        std::list<int> my_list(6);

        /*
         * std::iota (my_list.begin(), my_list.end(), 0);   just for populating the list
         */
        auto it =  std::find(my_list.begin(), my_list.end(), 3);
        //////////////////////////////////////////////////////////////////

        /*
         * Now let's sort a vector
         */
        std::vector<int> my_vector {0, -1, 23, 1, 44, 100};
        // sorting is easy
        std::sort(my_vector.begin(), my_vector.end());

        /*
         * Now let's move to some more advanced ones
         * Let's look at partial sums, then all_of, none_of with vectors
         *
         */
        std::vector<int> v(10, 2);
        std::partial_sum(v.cbegin(), v.cend(), v.begin());

        std::cout << "Among the numbers: ";
        for (auto m : v) std::cout << m << " ";
        std::cout << '\n';

        if (std::all_of(v.cbegin(), v.cend(), test/*[](int i){ return i % 2 == 0; }*/)) {
            std::cout << "All numbers are even\n";
        }
        if (std::none_of(v.cbegin(), v.cend(), std::bind(std::modulus<>(),
                                                         std::placeholders::_1, 2))) {
            std::cout << "None of them are odd\n";
        }
        struct DivisibleBy
        {
            const int d;
            DivisibleBy(int n) : d(n) {}
            bool operator()(int n) const { return n % d == 0; }
        };

        if (std::any_of(v.cbegin(), v.cend(), DivisibleBy(7))) {
            std::cout << "At least one number is divisible by 7\n";
        }
    }
};
#endif //SFU_OPEN_SOURCE_BOOTCAMP_ALGO_SESSION_H
