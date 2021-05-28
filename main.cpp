
#include "utils/include.h"
#include "multithreading/mt_class.h"
#include "data_structures/ds_class.h"


Session* parse_session(const std::string& in){
    if (in == "DataStructures"){
        return new DataStructures();
    }
    if (in == "Multithreading"){
        return new MultiThreading();
    }
    return nullptr;
}

int main(int c, char* argv[]) {

    // Parse arguments for session
    if( c != 2){ std::cerr << "invalid found. Exiting."; exit(EXIT_FAILURE);}

    auto session = parse_session(argv[1]); // implicit cast

    ASSERT(session != nullptr, "invalid session");

    session->begin();

}


