#include <stdio.h>
#include <iostream>
#include <cstdio>
#include "anagrabber.h"
#include "wordcontainer.h"
using namespace std;

//forward declarations
void testFunction();
//class WordContainer;

//global variables
string output = "";

int main()
{

	WordContainer* w = NULL;
	Anagrabber testAnagrabber("enable.txt");
	cout << "Type in letters to solve: ";
	cin >> output;
	cout << "Solving for "<< output.length() << " letters: ";
	testFunction();
	w = testAnagrabber.getWords(output);
	cout << "Wordcontainer size: " << w->getSize() << endl;
	cin.get();

	while (!(w->isEmpty()))
	{
		w->getTop(output);
		testFunction();
		w->pop();
	}

	return 0;
}

void testFunction()
{
	cout << output << endl;
	cin.get();
}