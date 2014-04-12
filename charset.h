#ifndef __CHARSET
#define __CHARSET

	namespace CharSet
	{
		const int charSetSize;

		const char letters[];
		const char Uletters[];

		int getLtrAsIndex(char c) const;
	};						


#endif