#include <stdio.h>
#include <iostream>
#include <cstdio>
#include "wordcontainer.h"
#include "anagrabber.h"
#include "wordsindex.h"

using namespace std;

string output = "";
void testFunction();

int main()
{
	/*TESTING FRAMES*/

	/*	 FUNCTIONAL PROGRAM BLOCK
	WordContainer* w;
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

	*/ //END  FUNCTIONAL PROGRAM BLOCK 
	return 0;
}

void testFunction()
{
	cout << output << endl;
	cin.get();
}