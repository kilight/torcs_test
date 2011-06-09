/*		file  : create.cpp		desc:  create/list testdata class methods
		date  : 07.2011															*/

#include "create.h"

#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

void create::file(void)
{
	int i=0;		// numer of testdata sets
		
		cout.fill(' ');
		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout <<setw(52)<<left<< "        file created                              ok" <<endl;
		cout <<setw(50)<<left<< "        set number of testdata sets                ";
		cin >> i;
		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;

	ofstream tupel;								// create write stream for file tupel.txt
	tupel.open("tupel.txt",ios::app);			// open file tupel.txt append
		cout.fill('-');

	int a,b,c;									// testdata variable
	for(int j=0;j<i;j++)						// loop for number of testdata sets
	{
		cout <<setw(50)<<right<< "      value ";
		cin >> a;
		cout <<setw(50)<<right<< "      value ";
		cin >> b;
		tupel << a << " " << b << " " << a*b << " "; // write testdata to tupel.txt
	}
	tupel << "\n";

		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout <<setw(52)<<left<< "        data created                              ok" <<endl;
		
		cout <<setw(52)<<left<< "        data written                              ok" <<endl;
		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;

	tupel.close();			// close file stream
}
void create::list(void)
{
	ifstream tupel;								// create read stream for file tupel.txt
	tupel.open("tupel.txt");					// open file tupel.txt

		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;

	string tmp;
	while (tupel.good())		// read until end of file
	{
			getline(tupel,tmp);
			cout << tmp << endl;
	}

		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;

	tupel.close();			// close file stream
}

void create::list(vector<data>* d)
{
	cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
	for(int i = 0; i < d->size(); i++) 
	{
		cout << (*d)[i].component[0] << " " << (*d)[i].component[1] << " " << (*d)[i].result << endl;	
	}

	cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
	cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
}
