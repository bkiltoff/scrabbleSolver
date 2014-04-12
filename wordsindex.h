#ifndef _WORDSINDEX
#define _WORDSINDEX

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "charset.h"

class WordsIndex
{
public:
	//default constructor
	WordsIndex();
	
	//constructor from arg
	WordsIndex(string word);

	//default destructor
	~WordsIndex();

	//copy constructor
	WordsIndex(const WordsIndex& other);

	//assignment constructor
	WordsIndex& operator=(const WordsIndex other);


	
	bool equals(const string) const;
	bool contains(const string) const;


	//convert char to its index value in the letters[array]
	int getLtrAsIndex(char c);
	
private:
	int* ltrs;	//s

	bool equals(const WordsIndex& other) const;
	bool contains(const WordsIndex& other) const;
	//convert word to an array of form [0,0,0,2,0,0,0,0,0,0,0...0,1,0,0...] for a word like "odd"
	void parseWordToIntegerArray(std::string word);
};	

#endif