#ifndef UTILS_H_
#define UTILS_H_
#include "constants.h"
#include <vector>

namespace AM{
    void sort(const SORT_ORDER &mySortOrder,AM::vector<process> &myProcesses);

    process getNext(AM::vector<process> &myProcesses);

    int getSize(AM::vector<process> &myProcesses);

    int handleMissingData(AM::vector<process> &myProcesses);
}
#endif /* UTILS_H_ */