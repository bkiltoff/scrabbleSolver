#ifndef _ANAGRABBER
#define _ANAGRABBER
#include <iostream>
#include <fstream>
#include <stack>
#include "wordcontainer.h"
#include "wordsindex.h"
using namespace std;

const string DEFAULTFILENAME = "words.txt";

class Anagrabber
{
public:
	Anagrabber();
	Anagrabber(string filename);
	~Anagrabber();
	//returns a reference to a newly-created container for matched words
	WordContainer* getWords(string input);

private:
	string wordToSolve;
	ifstream* dict;	//pointer to file
	WordsIndex* wordFinder;


	void searchWords(WordContainer&);

	int getSolutionMaxSize() const; //return max size of solutions
//	int getLettersSize() const; //returns size of [letters]
};

#endif
