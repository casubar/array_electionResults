// array_electionResults.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

#include "header_electionResults.h"

int main()
{
	std::string cNames[6];

	char cont;
	int a;
	unsigned int sizeList;

	std::vector<std::string> main_name;
	std::vector<int> main_vote;
	std::vector<int> main_vect_check(3);

	// declare file stream variables
	std::ifstream read_voteData; // input file stream variable
	std::ifstream read_name;
	std::ofstream outData_write; // output file stream variable



	//inData_read.open("names.txt"); // open input file then read from file
	read_voteData.open("voteData.txt");
	read_name.open("names.txt");
	//outData_write.open("voteData.txt"); // writes to the file or open the output file or creates the file

	getCandidatesName(read_name, 6, main_name);
	for (unsigned int i = 0; i < main_name.size(); i++) {
		std::cout << main_name[i] << std::endl;
	}

	//get_name(inData_read, main_list, 6);
	get_voteData(read_voteData, main_vote, 6);




	std::cout << std::endl;
	std::cout << "press any key!!!";
	std::cin >> cont;
    return 0;
}

