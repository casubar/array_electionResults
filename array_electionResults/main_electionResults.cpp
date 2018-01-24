// array_electionResults.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

#include "header_electionResults.h"

int main()
{
	std::string cNames[6];

	char cont;
	int a;
	unsigned int sizeList;

	std::vector<std::string> main_list;
	std::vector<int> main_vote;
	std::vector<int> main_vect_check(3);

	// declare file stream variables
	std::ifstream inData_read; // input file stream variable
	std::ofstream outData_write; // output file stream variable



	//inData_read.open("names.txt"); // open input file then read from file
	inData_read.open("voteData.txt");
	//outData_write.open("voteData.txt"); // writes to the file or open the output file or creates the file

	//inData_read >> a;
	//outData_write << 23;

	//std::cout << a;

	//getCandidatesName(inData_read, cNames, 6);
	//get_name(inData_read, main_list, 6);
	//get_voteData(inData_read, main_vote, 6);

	for (unsigned int i = 0; i < main_vect_check.size(); i++) {
		main_vect_check[i] = i * 3;
	}
	vect_passByRef(main_vect_check, 3);
	for (unsigned int i = 0; i < main_vect_check.size(); i++) {
		std::cout << main_vect_check[i] << " ";
	}
	std::cout << std::endl;

	// --- From File PassByRef ----
	std::vector<int> main_checkVote(3);
	vect_fromFile(main_checkVote, 3, inData_read);
	for (unsigned int i = 0; i < main_checkVote.size(); i++) {
		std::cout << main_checkVote[i] << " ";
	}


	std::cout << std::endl;
	std::cout << "press any key!!!";
	std::cin >> cont;
    return 0;
}

