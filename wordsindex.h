#ifndef _WORDSINDEX
#define _WORDSINDEX

#include <string>
#include <sstream>
using namespace std;
const int charSetSize = 26;
const char letters[charSetSize]
						= { 'a', 'b', 'c', 'd', 'e', 'f',
							'g', 'h', 'i', 'j', 'k', 
							'l', 'm', 'n', 'o', 'p',
							'q', 'r', 's', 't', 'u',
							'v', 'w', 'x', 'y', 'z'
						};
const char Uletters[charSetSize]
						= { 'A', 'B', 'C', 'D', 'E', 'F',
							'G', 'H', 'I', 'J', 'K',
							'L', 'M', 'N', 'O', 'P',
							'Q', 'R', 'S', 'T', 'U',
							'V', 'W', 'X', 'Y', 'Z'
						};
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