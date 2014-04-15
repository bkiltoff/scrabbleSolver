#include "charset.h"



namespace CharSet
{

const int charSetSize = 26;
const int values[charSetSize] = {
		7, 1, 1, 1, 1,
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1
	};
const char letters[charSetSize] = {
		'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'
	};


const char Uletters[charSetSize] = {
		'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'
	};

	/**************
	int getLtrsAsIndex(...)
	pre:	char c is in the set "letters" or "Uletters"
	post:	returns index of char in the set "letters"
			or else returns -1 for invalid char c
	**************/
	int CharSet::getLtrAsIndex(char c)
	{
		for (int i = 0; i < charSetSize; i++)
		{
			if (c == letters[i] || c == Uletters[i])
			{
				return i;
			}
		}
		//else, return error code
		return -1;
	}
}