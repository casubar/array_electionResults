// array_electionResults.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>



#include "header_electionResults.h"

int main()
{
	

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
	

	nameSize = get_candidate_nameAndcount(read_name, main_name);
	
	sort_name(main_name);
	init_votesByRegion(main_votesByregion, 4, nameSize);	
	init_totalVotes(main_totalVotes, nameSize);
	
	proc_voteData(read_voteData, main_votesByregion, main_name,nameSize, 4);
	get_totalVotes(main_votesByregion, main_totalVotes);

	disp_whole_table(main_name, main_votesByregion, main_totalVotes, 4);
	get_winner(main_name, main_totalVotes);



	std::cout << std::endl;
	std::cout << "press any key!!!";
	std::cin >> cont;
    return 0;
}

