#include "anagrabber.h"

//public function
//default constructor
Anagrabber::Anagrabber()
{
	dict = new ifstream();
	dict->open(DEFAULTFILENAME);
}

//constructor from dictionary file
Anagrabber::Anagrabber(string file)
{ 
	dict = new ifstream();
	dict->open(file);
}

//default destructor
Anagrabber::~Anagrabber()
{
	dict->close();
}

WordContainer* Anagrabber::getWords(string input)
{
	wordToSolve = input;
	WordContainer* wordList = new WordContainer();
	wordFinder = new WordsIndex(wordToSolve);
	searchWords(*wordList);
	delete wordFinder;
	return wordList;
}

//private function
//loads wordList with matches
void Anagrabber::searchWords(WordContainer& wordList)
{
	string dictWord;		//container for each candidate word
	while (getline(*dict, dictWord))	//for each word in *dict
	{
		//where dictword is <= than maximum solution
		if ((dictWord.length() <= getSolutionMaxSize()))
		{
			if (wordFinder->equals(dictWord) || wordFinder->contains(dictWord))
			{
				wordList.push(dictWord);
			}
		}
	}
}

int Anagrabber::getSolutionMaxSize() const
{
	return wordToSolve.length();
}

