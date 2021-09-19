//============================================================================
// Name        : proj_refactor_file
// Author      : Abigale Mondal
// Version     : September 17, 2021
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"
#include "../includes/utils.h"
#include "../includes/fileio.h"

using namespace std;
using namespace AM;

int main() {
	std::vector<process> myProcesses;

	//assumme failure
	int iRet = FAIL;

	//get raw data
	iRet = load(SOURCE_FILE, myProcesses);
	if (iRet != SUCCESS)
		return iRet;

	int orig_size = getSize(myProcesses);
	int new_size = handleMissingData(myProcesses);
	if (orig_size != new_size)
		std::cout<<"Dropped "<<(orig_size-new_size)<<" rows with missing data"<<std::endl;

	//sort the data
	sort(SORT_ORDER::START_TIME,myProcesses);

	//how many entries in vector
	iRet = getSize(myProcesses);
	if (iRet < EMPTY)
		return iRet;

	process p = getNext(myProcesses);
	if (p.cpu_time == UNINITIALIZED)
		return

	//save processed data
	iRet = save(RESULTS_FILE, myProcesses);
	return iRet;
}