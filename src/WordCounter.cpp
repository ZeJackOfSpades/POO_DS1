#include "../inc/WordCounter.hpp"

//ispunct

WordCounter::WordCounter(const string textLine){
	this->textLine = textLine;
}

unsigned int WordCounter::count(void){
	unsigned int	nbWord 			=	0;
	bool			lockCount		=	false;

	string tmpTextLine	=	this->textLine;

	for(unsigned int i = 0 ; i <= tmpTextLine.size() ; i++){
		if (isblank(tmpTextLine[i]) 
			&& !ispunct(tmpTextLine[i])
			&& !isdigit(tmpTextLine[i])){
			nbWord +=	1;
		}
	}
	return nbWord;
}

/* work without spaces
for(unsigned int i = 0 ; i <= tmpTextLine.size() ; i++){
		if ((!isalpha(tmpTextLine[i])) && (!isdigit(tmpTextLine[i])) && lockCount == false ){
			nbWord +=	1;
			lockCount = false;
		}else{
			lockCount = true;
		}

	}
*/

/*
&& !isdigit(tmpTextLine[i]) 
			&& !ispunct(tmpTextLine[i])
*/