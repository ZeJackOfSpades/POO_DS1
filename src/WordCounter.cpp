#include "../inc/WordCounter.hpp"

WordCounter::WordCounter(const string textLine){
	this->textLine = textLine;
}

unsigned int WordCounter::count(void){
	unsigned int nbWord =	0;

	string tmpTextLine	=	this->textLine;

	for(unsigned int i = 0 ; i < tmpTextLine.size() ; i++){
		if (tmpTextLine[i])
	}

}