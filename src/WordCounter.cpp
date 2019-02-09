#include "../inc/WordCounter.hpp"

WordCounter::WordCounter(const string textLine){
	this->textLine = textLine;
}

unsigned int WordCounter::count(void){
	unsigned int	nbWord 			=	0;
	bool			lockCountLast	=	false;
	
	string tmpTextLine	=	this->textLine;

	for(unsigned int i = 0 ; i < tmpTextLine.size() ; i++){
		if ((!isalpha(tmpTextLine[i])) && (!isdigit(tmpTextLine[i]))){
			nbWord +=	1;
		}
		//To count the last word
		if(tmpTextLine[i+1] == '\0'){
			nbWord +=	1;
		}
	}
	return nbWord;
}