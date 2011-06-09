/*		file  : exercicse.cpp		desc:  exercice class methods
		date  : 07.2011																	*/

#include "exercise.h"

#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void exercise::format(void)
{
	ifstream tupel;								// create read stream for file tupel.txt
	tupel.open("tupel.txt");					// open file tupel.txt

		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;

	char tmp[1000];
	vector<data> component;
	
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
					component.push_back(*tmpdata);
					j++;
				}
				if(d != 2) 
				{
					component[j - 1].component[d] = atoi(temp.substr(k, i).c_str());
				}
				else 
				{
					component[j - 1].result = atoi(temp.substr(k, i).c_str());
				}

				k = i+1;
				if(d == 2) d = 0;
				else d++;
			}
		}	
	}

	for(int l=0;l<component.size();l=l+1)
	{
		cout << component[l].component[0] << " ";
		cout << component[l].component[1] << " ";
		cout << component[l].result << " " << endl;
	}

	tupel.close();			// close file stream

		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
}



