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
	int a, nameSize;
	unsigned int sizeList;

	std::vector<std::string> main_name;
	std::vector<int> main_vote;
	std::vector<int> main_vect_check(3);
	std::vector < std::vector<int> > main_votesByregion;
	std::vector<int> main_totalVotes;



	// declare file stream variables
	std::ifstream read_voteData; // input file stream variable
	std::ifstream read_name;
	std::ofstream outData_write; // output file stream variable


	read_voteData.open("voteData.txt");
	read_name.open("names.txt");
	


	getCandidatesName(read_name, 6, main_name);
	sort_name(main_name);
	init_votesByRegion(main_votesByregion, 4, 6);	
	init_totalVotes(main_totalVotes, 6);
	
	proc_voteData(read_voteData, main_votesByregion, main_name,6, 4);

	disp_name(main_name);
	disp_votesByRegion(main_votesByregion, 4, 6);
	//disp_totalVotes(main_totalVotes);




	std::cout << std::endl;
	std::cout << "press any key!!!";
	std::cin >> cont;
    return 0;
}

