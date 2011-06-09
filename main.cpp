/*		file  : main.cpp	desc:  starter file
		date  : 07.2011                                 */

#include "gui.h"	// control class gui{}
#include "database.h"   // database class database{}

int main(void)
{
	database d;
	gui a(&d);			// create class gui
	a.guiA();		// interfase starte method
	return 0;
}
