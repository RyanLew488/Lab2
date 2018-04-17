/*********************************************************************
** Program name: outputLetters.cpp
** Author: Ryan Lew
** Date: 4/15/2018
** Description: adds the array values to the output file
*********************************************************************/

#include "outputLetters.hpp"

void outputLetters(std::ofstream &outFile, int* letterArray) {

	outFile << std::endl << std::endl;

	for (int i = 0; i < 26; i++) {

		outFile << static_cast<char>(i + static_cast<int>('a')) << ": " << letterArray[i] << std::endl;

	}
}