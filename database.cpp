/*		file  : database.cpp		desc:  database class methods
		date  : 07.2011							*/

#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "database.h"
using namespace std;

	database::database():datavector(NULL) {	
		datavector = NULL;
	}

	vector<data>* database::getData() {
		return datavector;
	}

	void database::createData() {
		ifstream tupel;							// create read stream for file tupel.txt
		tupel.open("tupel.txt");					// open file tupel.txt

		char tmp[1000];
	
		datavector = new vector<data>;
		int j=0;
		while(tupel.good())						// read until end of file
		{
			tupel.getline(tmp,1000,'\n');
			string temp = "";
			temp.insert(0,tmp);

			int i = 0;
			int k = 0;
			for(int d = 0; i < temp.size(); i++) 
			{
				if(tmp[i] == ' ')
				{
					if(d == 0) 
					{
						data* tmpdata = new data();
						datavector->push_back(*tmpdata);
						j++;
					}
					if(d != 2) 
					{
						(*datavector)[j - 1].component[d] = atoi(temp.substr(k, i).c_str());
					}
					else 
					{
						(*datavector)[j - 1].result = atoi(temp.substr(k, i).c_str());
					}

					k = i+1;
					if(d == 2) d = 0;
					else d++;
				}
			}	
		}
		tupel.close();
	}


