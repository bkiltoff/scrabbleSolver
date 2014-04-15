#include <stdio.h>
#include <iostream>
#include <cstdio>
#include "wordpoints.h"
//#include "anagrabber.h"
//#include "wordcontainer.h"
using namespace std;

//forward declarations
void testFunction();

//global variables
string aString = "";

int main()
{
/********************* old test
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
****************************/ //end old test

	cout << "Type in word to get points: ";
	cin >> aString;
	WordPoints testPoints = WordPoints(aString);
	int answer = testPoints.getPoints();
	cout << answer << endl;
	cin.get();
	return 0;
}

void testFunction()
{
	cout << aString << endl;
	cin.get();
}