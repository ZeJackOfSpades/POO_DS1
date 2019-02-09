/**
*	FILE NAME:		WordCounterTest.cpp
* 	DESCRIPTION :   This is the test of WordCounter class
*	
*	Author :                J. Monnier
*	Date:                   09/02/2019
*	
*	STATUS :	Only 3 / 4 TEST_CASE are passed
*/		


#define CATCH_CONFIG_MAIN

#include "../inc/catch.hpp"
#include "../inc/WordCounter.hpp"

TEST_CASE("Test space count","[WordCounter]"){
	WordCounter word1("Za warudo");

	REQUIRE(word1.count() == 2);
	
}
TEST_CASE("List of numbers","[WordCounter]"){
	WordCounter word1("0000");

	REQUIRE(word1.count() == 0);
}

TEST_CASE("List of symbols","[WordCounter]"){
	WordCounter word1("&§:/");

	REQUIRE(word1.count() == 0);
}

TEST_CASE("URL check","[WordCounter]"){
	WordCounter word1("https://github.com/ZeJackOfSpades/POO_DS1.git");

	REQUIRE(word1.count() == 0);
}
