#ifndef __WORDSPOINTS
#define __WORDSPOINTS

#include "charset.h"
#include <string>
using namespace std;


class WordPoints
{
private:
	//point system		
	const int values [] = 
				{
				    7, 1, 1, 1, 1,
				    1, 1, 1, 1, 1,
				    1, 1, 1, 1, 1,
				    1, 1, 1, 1, 1,
				    1, 1, 1, 1, 1, 1 	 
				};

	//empty array to contain letter values
	int* tiles;
	int arraySize;
	string word;

public:
	//default constructor
	WordPoints();

	//constructor from string
	WordPoints(string word);
	
	//default destructor
	~WordPoints();

	//copy constructor
	WordPoints(const WordPoints& other);

	//assignment operator
	WordPoints& operator= (const WordPoints other);

	//return point value of a letter
	int getCharValue(char arg) const;
	
	//get a words point value
	int getPoints(string word) const;

	//apply bonus
	int letterMultiplier(int multiple, int index);

	//apply bonus
	int wordMultiplier(int multiple);
	
	//get the word that's being processed
	string getWord() const;


};

#endif