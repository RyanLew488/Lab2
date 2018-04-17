/*********************************************************************
** Program name: countLetters.cpp
** Author: Ryan Lew
** Date: 4/15/2018
** Description: A program to calculate either a 2x2 or 3x3 matrix's determinate
*********************************************************************/
#include "countLetters.hpp"
#include "outputLetters.hpp"
#include <iostream>


void countLetters(std::ifstream &infile, int* letterArray) {

	char search;
	std::string paragraph = "";
	
	while (std::getline(infile, paragraph)) {
		
		std::ofstream outputFile;
		std::string outFileName = "";

		std::cout << "Please enter the name of the output file you would like: " << std::endl;
		std::cin >> outFileName;
		outputFile.open(outFileName);

		for (int i = 0; i < paragraph.length(); i++) {
			
			//the program needs to count both capital and lower case.
			paragraph[i] = tolower(paragraph[i]);
			search = paragraph[i];
			if (search != '\n') {
				//counts each letter by indexing it to its matrix element a - a = 0 etc.
				int index = (static_cast<int>(search) - static_cast<int>('a'));
				if (0 < index && index < 26) {

					letterArray[index]++;

				}
			}
		}

		outputLetters(outputFile, letterArray);
		outputFile.close();
		
		//reset elements
		for (int i = 0; i < 26; i++) {

			letterArray[i] = 0;

		}
		paragraph = "";
	}
	infile.close();
}