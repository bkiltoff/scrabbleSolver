#include "charset.h"
/****************
//size of alphabet
	CharSet::charSetSize = 26;

//lowercase letters
	CharSet::letters    = { 'a', 'b', 'c', 'd', 'e', 'f',
				'g', 'h', 'i', 'j', 'k', 
				'l', 'm', 'n', 'o', 'p',
				'q', 'r', 's', 't', 'u',
				'v', 'w', 'x', 'y', 'z'
		  	      };
//uppercase letters
	CharSet::Uletters   = { 'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'N', 'O', 'P',
				'Q', 'R', 'S', 'T', 'U',
				'V', 'W', 'X', 'Y', 'Z'
		  	      };
	
*****************/
//private
//	int getLtrsAsIndex(...)
//	pre:	char c is in the set "letters" or "Uletters"
//	post:	returns index of char in the set "letters"
//			or else returns -1 for invalid char c
	int CharSet::getLtrAsIndex(char c) const	
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