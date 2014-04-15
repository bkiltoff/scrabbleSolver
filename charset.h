#ifndef __CHARSET
#define __CHARSET

namespace CharSet
{
	extern const int charSetSize;
	extern const int values[];
	extern const char letters[];
	extern const char Uletters[];

	int getLtrAsIndex(char c);
}						


#endif