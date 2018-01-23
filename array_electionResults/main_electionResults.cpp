// array_electionResults.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

#include "header_electionResults.h"

int main()
{
	std::ifstream inData;
	std::ofstream outData;
	char cont;

	inData.open("prog.txt");



	std::cout << std::endl;
	std::cout << "press any key!!!";
	std::cin >> cont;
    return 0;
}

