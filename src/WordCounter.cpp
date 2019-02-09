/**
*	FILE NAME:    WordCounter.cpp
* 	DESCRIPTION :   This is the description of all functions 
*					contains in WordCounter.hpp
*	
*	Author :                J. Monnier
*	Date:                   09/02/2019
*	
*	STATUS :	The algorithm of count count all the words minus one if there are
				only spaces
				Otherwise an url string, list of symbols and list of numbers are not counted
*/				

#include "../inc/WordCounter.hpp"

WordCounter::WordCounter(const string textLine){
	this->textLine = textLine;
}


/** 
* FONCTION NAME:				count
* PARAMETERS: 					void
* RETURN: 						unsigned int nbWord
* DESCRIPTION: 					This function count the words contained in a string
* 								
* DATE : 						09/02/2019
* AUTHOR : 						J.MONNIER
* RULES FOR IMPLEMENTATION : 	If the string contains only space you need to add one at the result
*/
unsigned int WordCounter::count(void){
	unsigned int	nbWord 			=	0;

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