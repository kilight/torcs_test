/*		file  : create.h		desc:  create/list testdata class
		date  : 07.2011													*/

#ifndef CREATE_H
#define CREATE_H

#include <vector>
#include "database.h"
using namespace std;

class create
{

public:
	void file(void);	// create testdata file tupel.txt
	void list(void);	// create testdata file solution.txt
	void list(vector<data>* d); // list data from a vector e.g. the database
};

#endif
