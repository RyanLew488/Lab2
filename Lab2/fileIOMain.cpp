/*********************************************************************
** Program name: countLetters.cpp
** Author: Ryan Lew
** Date: 4/15/2018
** Description: A program to read an input file, count the occurances
**				of each letter in each paragraph and output it to a file
*********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include "countLetters.hpp"
#include "outputLetters.hpp"

int main() {

	std::ifstream inputFile;
	std::string inFileName = "";
	
	std::cout << "Please enter the name of a file you want to open" << std::endl;
	std::cin >> inFileName;
	inputFile.open(inFileName);

	int* count = new int[26];

	//empty the array
	for (int i = 0; i < 26; i++) {

		count[i] = 0;

	}

	if (inputFile.fail()) {

		std::cout << "The file did not open" << std::endl;

	}

	else {

		while (!inputFile.eof()) {

			countLetters(inputFile, count);

		}
	}
	return 0;
}