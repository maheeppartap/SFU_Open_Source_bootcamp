
/*
 *  Shared folder for all basic include files.
 */
#ifndef SFU_OPEN_SOURCE_BOOTCAMP_INCLUDE_H
#define SFU_OPEN_SOURCE_BOOTCAMP_INCLUDE_H

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <string>


/*
 * Here are some custom macros
 */
#ifndef NDEBUG
#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            exit(EXIT_FAILURE); \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#endif


#endif //SFU_OPEN_SOURCE_BOOTCAMP_INCLUDE_H
