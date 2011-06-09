/*		file  : table.cpp		desc:  table class methods
		date  : 07.2011																	*/

#include "table.h"

#include <iomanip>
#include <iostream>
using namespace std;

void table::list(void)
{
		int product[10][10] = { {0,1,2,3,4,5,6,7,8,9},			// [0][j]
								{0,1,2,3,4,5,6,7,8,9},			// [1][j]
								{0,1,2,3,4,5,6,7,8,9},			// [2][j]
								{0,1,2,3,4,5,6,7,8,9},			// [3][j]
								{0,1,2,3,4,5,6,7,8,9},			// [4][j]
								{0,1,2,3,4,5,6,7,8,9},			// [5][j]
								{0,1,2,3,4,5,6,7,8,9},			// [6][j]
								{0,1,2,3,4,5,6,7,8,9},			// [7][j]
								{0,1,2,3,4,5,6,7,8,9},			// [8][j]
								{0,1,2,3,4,5,6,7,8,9}, };		// [9][j]

		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout.fill(' ');
	
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			cout <<setw(5)<<right<< product[i][i]*product[i][j];
		}
		cout << endl;
	}
		cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
		cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
}
