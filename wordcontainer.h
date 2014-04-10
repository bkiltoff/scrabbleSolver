#ifndef _WORDCONTAINER
#define _WORDCONTAINER
#include <string>

using namespace std;

class WordContainer
{
public:
	WordContainer();
	~WordContainer();
	bool erase();
	void pop();
	void pop(string& word);
	bool isEmpty() const;
	void push(const string& word);
	void getTop(string& word) const;
	int getSize() const;

private:
	int size;
	struct WordNode
	{
		string word;
		WordNode *next;
	};
	WordNode *first;
};

#endif