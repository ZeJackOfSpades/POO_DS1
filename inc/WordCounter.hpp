#include <iostream>
#include <string>
#include <fstream>
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