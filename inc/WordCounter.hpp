/**
*	FILE NAME:    	WordCounter.hpp
* 	DESCRIPTION :   This file contains the declaration of the class WordCounter
*
*	Author :                J. Monnier
*	Date:                   09/02/2019
*/


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

class WordCounter
{	
private:
	string textLine;
public:
	WordCounter(const string);
	unsigned int count();
	//string getTextLine(){return this-> textLine;}
	//~WordCounter();

};