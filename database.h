/*		file  : database.h		desc:  database class
		date  : 07.2011							*/

#include <vector>
using namespace std;

#ifndef DATABASE_H
#define DATABASE_H

class data
{
public:
	int component[2];
	int weight[2];
	int result;
};

class database {
	public:
	database();
	vector<data>* getData();
	void createData();

	private:
	vector<data>* datavector;
};

#endif
