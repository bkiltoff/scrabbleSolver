//public

//default constructor
	WordPoints::WordPoints()
	{ 
		word = "";
		arraySize = 1;
		tiles = new int[arraySize];
		tiles[0]=0;
	}
//END default constructor


//constructor from string
	WordPoints::WordPoints(string inputWord)
	{ 
		this->word = inputWord;
	//use string::length to get array size
		this->arraySize = this->word.length();
	//create new array
		tiles = new int[arraySize];

	//use getCharValue to populate each index with string value
		for(int i = 0; i < arraySize; i++)
		{
			tiles[i] = getCharValue(words[i]);
		} 
	}
//END constructor from string	


//default destructor
	~WordPoints::WordPoints()
	{ 
		delete tiles; 
	}
//END default destructor


//copy constructor
	WordPoints::WordPoints(const WordPoints::WordPoints& other)
	{ 
		this->arraySize = other.arraySize;
		this->tiles = new int[arraySize]; 
		for(int i = 0; i < arraySize; i++)
		{
			this->tiles[i] = other.tiles[i];
		}
	}
//END copy constructor


//assignment operator
	WordPoints::WordPoints& operator= (const WordPoints::WordPoints other)	
	{ 
		if (this != &other) //protect against invalid self-assignment
		{
			this->word = other.getWord();
			this->arraySize = word.length();
			int* new_tiles = new int[arraySize]; 
		
			//copy other.tiles to new_tiles
			for (int i = 0; i < arraySize; i++)
			{
				new_tiles[i] = other.tiles[i];
			}

		//deallocate old memory
			delete this->tiles;

		//assign new memory to new object
			this->tiles = new_tiles;
			return *this;
		}
	}
//END assignment operator


//getCharValue
	//return point value of a letter
	int getCharValue(char c) const
	{ 
/*
AT THIS POINT I'M THINKING I SHOULD REDO "wordsindex.[h][cpp]" ALONG WITH
"charset.[h][cpp]" SOURCECODE FILES TO MAKE A CharSet CLASS OBJECT WITH A
MEMBER FUNCTION TO RETURN A CHARACTERS INDEX IN THE LETTER ARRAY... E.G., 'a' or 'A'
RETURNS 1, 'c' or 'C' RETURNS 3, ETC. I'VE ALREADY WRITTEN THIS FUNCTION 
BUT IT SEEMS LIKE IT WOULD BE MORE SENSIBLE TO ENCAPSULATE THIS IN AN OBJECT
RATHER THAN REWRITE THE CODE TO DO THE SAME THING IN the WordPoints CLASS...
*/
		;
	}
//END getCharValue
	

//getPoints
	//get a words point value
	int getPoints(string word) const
	{ 
		; 
	}
//END getPoints


//letterMultiplier
	//apply bonus
	int letterMultiplier(int multiple, int index)
	{ 
		; 
	}
//END letterMultiplier


//wordMultiplier
	//apply bonus
	int wordMultiplier(int multiple)
	{ 
		; 
	}
//END wordMultiplier


//getWord
	//get the word that's being processed
	string WordPoints::getWord() const
	{
		return this->word;
	}

//END getWord
//private