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
string aString = "";

int main()
{
	WordContainer* w = NULL; //will receive words
	Anagrabber testAnagrabber("enable.txt"); //will deliver w
	cout << "Type in letters to solve: ";
	cin >> aString;
	cout << "Solving for "<< aString.length() << " letters: ";
	testFunction();
	//Anagrabber scans [filename] for anagrams of aString and
	//its sub-strings and returns w, containing all matches
	w = testAnagrabber.getWords(aString);
	cout << "Wordcontainer size: " << w->getSize() << endl;
	cin.get(); //pause program

	while (!(w->isEmpty()))
	{
		w->getTop(aString); //put top of w into aString
		testFunction();	//show result, press enter to continue
		w->pop();
	}

	return 0;
}

void testFunction()
{
	cout << aString << endl;
	cin.get();
}