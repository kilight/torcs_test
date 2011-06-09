/*		file  : gui.cpp		desc:  interface class methods (if controlled)
		date  : 07.2011             - guiA   : initial interface
									- guiB(c): create testdata
									- guiC(l): list testdata
									- guiD(e): exercise perceptron					*/

#include "gui.h"
#include "create.h"			// dependency for guiB and guiC
#include "exercise.h"		// dependency for guiD
#include "table.h"			// dependency for guiH

#include <iomanip>
#include <iostream>
using namespace std;

void gui::guiA(void)
{
	char guiCtrl='a';

	cout.fill(' ');
	cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
	cout <<setw(52)<<left<< "        hs.ki.lab::torcs.client/perceptron.test.a " <<endl;
	cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
	while(guiCtrl!='q')
	{
		cout.fill(' ');
		cout <<setw(52)<<left<< "        (c)reate new testdata" <<endl;
		cout <<setw(52)<<left<< "        (l)list testdata" <<endl;
		cout <<setw(52)<<left<< "        (e)cercise current perceptron" << endl;
		cout <<setw(52)<<left<< "        (t)est perceptron" << endl;
		cout <<setw(52)<<left<< "        (s)ave the program"<< endl;
		cout <<setw(52)<<left<< "        (l)oad program from file" << endl;
		cout <<setw(52)<<left<< "        (d)elete program file" << endl;
		cout <<setw(52)<<left<< "        (m)ultiplication table" << endl;
		cout <<setw(52)<<left<< "        (q)uit program"  << endl;

		cout.fill('-');
		cout <<setw(50)<<right<< " ";
		cin >> guiCtrl;

		if(guiCtrl=='c')		// create testdata
		{
			guiB();
			guiCtrl='a';
		}

		else if(guiCtrl=='l')	// list testdata
		{
			guiC();
			guiCtrl='a';
		}
		else if(guiCtrl=='e')	// ecercise perceptron
		{			
			guiD();
			guiCtrl='a';
		}
		else if(guiCtrl=='t')
		{			
			cout.fill(' ');
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "        under construction " <<endl;
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
			guiCtrl='a';
		}
		else if(guiCtrl=='s')
		{	
			cout.fill(' ');
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "        under construction " <<endl;
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
			guiCtrl='a';
		}
		else if(guiCtrl=='l')
		{			
			cout.fill(' ');
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "        under construction " <<endl;
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
			guiCtrl='a';
		}
		else if(guiCtrl=='d')	// delete program file
		{			
			guiH();
			guiCtrl='a';
		}

		else if(guiCtrl=='m')	// show multiplication table
		{			
			guiI();
			guiCtrl='a';
		}

		else if(guiCtrl=='q') {exit;}

		else
		{
			cout.fill(' ');
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "        check your input sucker " <<endl;
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
			guiCtrl='a';
		}

	}
}
void gui::guiB(void)
{
	create cls;		// initialize class create{}
	cls.file();		// create testdata
}
void gui::guiC(void)
{
	create cls;		// initialize class create{}
	cls.list();		// list testdata
}
void gui::guiD(void)
{
	exercise cls;	// initialize class exercise{}
	cls.format();	// exercise perceptron
}
void gui::guiH(void)
{	
	if(remove("tupel.txt")!= 0)
	{
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
	}
	else
	{
		puts( "File successfully deleted" );
			cout <<setw(52)<<left<< "----------------------------------------------------" <<endl;
			cout <<setw(52)<<left<< "------------------------------------ reset interface" <<endl;
	}
}
void gui::guiI(void)
{
	table cls;		// initialize class table{}
	cls.list();		// show multiplication table
}