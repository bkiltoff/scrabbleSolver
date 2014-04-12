#include "wordsindex.h"

//constructor
WordsIndex::WordsIndex()
{
	ltrs = new int[charSetSize];
	for (int i = 0; i < charSetSize; i++)
	{
		ltrs[i] = 0;
	}
}

//constructor from word
WordsIndex::WordsIndex(string word)
{
	ltrs = new int[charSetSize];
	for (int i = 0; i < charSetSize; i++)
	{
		ltrs[i] = 0;
	}
	parseWordToIntegerArray(word);
}

//destructor
WordsIndex::~WordsIndex()
{
	delete ltrs;
}

//copy constructor
WordsIndex::WordsIndex(const WordsIndex& other)
{
	this->ltrs = new int[charSetSize];
	for (int i = 0; i < charSetSize; i++)
	{
		this->ltrs[i] = other.ltrs[i];
	}
}

//copy assignment operator
WordsIndex& WordsIndex::operator = (const WordsIndex other)
{
	if (this != &other) //protect against invalid self-assignment
	{
		//allocate new memory
		int* new_ltrs = new int[charSetSize];
		
		//copy other.ltrs to new_ltrs
		for (int i = 0; i < charSetSize; i++)
		{
			new_ltrs[i] = other.ltrs[i];
		}

		//deallocate old memory
		delete this->ltrs;
		
		//assign new memory to new object
		this->ltrs = new_ltrs;

		return *this;
	}
}

//public
//	bool equals(...)
//	pre:
//	post:
bool WordsIndex::equals(const string word) const
{
	WordsIndex newWordIndex = WordsIndex(word);
	return this->equals(newWordIndex);
}

//public
//	bool contains(...)
//	pre:
//	post:
bool WordsIndex::contains(const string word) const
{
	WordsIndex newWordIndex = WordsIndex(word);
	return this->contains(newWordIndex);
}

//private
//	bool equals(...)
//	pre:
//	post:
bool WordsIndex::equals(const WordsIndex& other) const
{
	for (int i = 0; i < charSetSize; i++)
	{
		if (other.ltrs[i] != ltrs[i])
			return false;
	}
	return true;
}

//private
//	bool contains(...)
//	pre:
//	post:
bool WordsIndex::contains(const WordsIndex& other) const
{
	for (int i = 0; i < charSetSize; i++)
	{
		if (other.ltrs[i]>0 && other.ltrs[i] > ltrs[i])
		{
			return false;
		}
	}
	return true;
}


//private
//	parseWordToIntegerArray(...)
//	pre:	WordsIndex has been initialized
//			string "word" is not empty
//	post:	tally each occurrence of a letter in the set "letters"
//			in the string "word" on the ltrs[] array
void WordsIndex::parseWordToIntegerArray(std::string word)
{
	//escape if empty string
	if (word.length() == 0)
	{
		return;	//end function
	}
	//simple solution if single char
	if (word.length() == 1)
	{
		ltrs[0] = word[0];
		return;	//end function
	}
	//otherwise iterate through string and tally instances on ltrs[]
	else
	{
		const char * c = word.c_str();
		//iterate through each letter of word
		for (unsigned int i = 1; i <= word.length(); i++)
		{
			char w = *c;
			int index = CharSet::getLtrAsIndex(w);
			ltrs[index]++;	//increment value in ltrs array
			c++;	//iterate pointer to next letter from word
		}
		return;	//end function
	}
}