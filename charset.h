#ifndef __CHARSET
#define __CHARSET

	namespace CharSet
	{
		extern const int charSetSize = 26;

		extern const char letters[] =
			      { 'a', 'b', 'c', 'd', 'e', 'f',
				'g', 'h', 'i', 'j', 'k', 
				'l', 'm', 'n', 'o', 'p',
				'q', 'r', 's', 't', 'u',
				'v', 'w', 'x', 'y', 'z'
		  	      };

		extern const char Uletters[] =  
			      { 'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'N', 'O', 'P',
				'Q', 'R', 'S', 'T', 'U',
				'V', 'W', 'X', 'Y', 'Z'
		  	      };

		int getLtrAsIndex(char c) const;
	};						


#endif