/*		file  : perceptron.h		desc:  perceptron class
		date  : 07.2011							*/

#include <vector>
#include "database.h"
using namespace std;

#ifndef PERCEPTRON_H
#define PERCEPTRON_H

const int DATESIZE = 5;

class perceptron {
	public:
	perceptron();
	void train(data d);
	void train(vector<data> d);
	float getValue(data d);

	private:
	float* p;
};

#endif
