#ifndef FILEIO_H_
#define FILEIO_H_
#include "constants.h"
#include <vector>
#include <string>

namespace AM{
    int load(const AM::string filename, AM::vector<process> &myProcesses);

    int save(const AM::string filename, AM::vector<process> &myProcesses);
}

#endif /* FILEIO_H_ */