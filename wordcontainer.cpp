#include "wordcontainer.h"
using namespace std;

WordContainer::WordContainer()
{
	first = NULL;
	size = 0;
	
	return;
}

WordContainer::~WordContainer()
{
	if (!WordContainer::erase())
		/*throw error*/;
	
	return;
}

/*erase stack*/
bool WordContainer::erase()
{
	while (size > 0)
		pop();
	
	return true;
}

/*delete first word in stack*/
void WordContainer::pop()
{
	if (this->size > 0)
	{
		WordNode *tmp;
		tmp = this->first;
		this->first = (this->first->next);
		tmp->next = NULL;
		delete tmp;
		size--;
		return;
	}
	return;
}

/*fetch first word in stack*/
void WordContainer::pop(string& word)
{
	if (this->size > 0)
	{
		word = this->first->word;
		pop();
	}
	else
		word = "";
	return;
}

bool WordContainer::isEmpty() const
{
	return size == 0;
}

void WordContainer::push(const string& word)
{
	WordNode* newWord = new WordNode();
	newWord->word = word;
	newWord->next = this->first;
	first = newWord;
	size++;

	return;
}

void WordContainer::getTop(string& word) const
{
	word = first->word;

	return;
}

int WordContainer::getSize() const
{
	return size;
}