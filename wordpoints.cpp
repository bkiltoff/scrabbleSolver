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

		//use WordPoints::getCharValue to populate each 
		//index with string value
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
		int index = CharSet::getLtrAsIndex(c);
		return values[index];
	}
//END getCharValue
	

//getPoints
	//get a word's point value
	int getPoints() const
	{ 
		int accumulator = 0;
		for(int i = 0; i < arraySize; i++)
		{
			accumulator += getCharValue(word[i]);
		} 
		return accumulator;
	}
//END getPoints


//letterMultiplier
	//apply bonus
	int letterMultiplier(int multiple, int index)
	{ 
		int accumulator = getPoints();
		--multiple;
		accumulator += (getCharValue(word[index]) * multiple);
		return accumulator;
	}
//END letterMultiplier


//wordMultiplier
	//apply bonus
	int wordMultiplier(int multiple)
	{ 
		return multiple*getPoints(); 
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