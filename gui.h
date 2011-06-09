/*		file  : gui.h		desc:  interface class
		date  : 07.2011                                 */

#ifndef GUI_H
#define GUI_H
#include "database.h"


class gui
{
	char guiCtrl;		// interface control variable
public:
	database* d;		// corresponding database

	gui(database* d);	// constructor with corresponding database
	void guiA(void);	// inicial interace
	void guiB(void);	// create testdata
	void guiC(void);	// list testdata
	void guiD(void);	// exercise perceptron
	void guiH(void);	// delete program file
	void guiI(void);	// show multiplication table
};

#endif
