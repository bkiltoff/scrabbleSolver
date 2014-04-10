#ifndef _SOLVER
#define _SOLVER
#include "anagrabber.h"
#include <stdio.h>
using namespace std;


class Solver
{
public:
	Solver();
	~Solver();

private:
	Anagrabber tiles;
	WordContainer words;
		
};

#endif