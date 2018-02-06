#pragma once
#include <vector>







// initialize votesByRegion table
void init_votesByRegion(std::vector <std::vector<int> > &regionTable, int regNum, int nameNum);

// display votesByRegion table
void disp_votesByRegion(std::vector <std::vector<int> > table, int regNum, int nameNum);

// initialize totalVotes table
void init_totalVotes(std::vector<int> &sum_votes, int nameNum);


// display totalVotes table
void disp_totalVotes(std::vector<int> sum_votes);



// get number of names
int get_candidate_nameAndcount(std::ifstream& inp, std::vector<std::string> &cNames);



// sort name
void sort_name(std::vector<std::string> &name);

// display candidate name
void disp_name(std::vector<std::string> name);

// get vote data
void getVotes(std::ifstream& read, std::vector <int> &region, std::vector<int> &vote, int listSize);



// use binary search for location of candidate name from the name list
int get_name_loc(std::vector<std::string> &name, int listSize, std::string nameToSearch);


// process voteData.txt
void proc_voteData(std::ifstream& read, std::vector< std::vector<int> > &voteList, std::vector<std::string> nameList, int nameNum, int regNum);


// display whole table
void disp_whole_table(std::vector<std::string> &nameList, std::vector< std::vector<int> > &voteList, std::vector<int> &totalVotes, int regNum);

// get total votes for each candidate
void get_totalVotes(std::vector< std::vector<int> > &voteList, std::vector<int> &totalVotes);

// get name of most total votes by region
void get_winner(std::vector<std::string> &cNamesList, std::vector<int> totalVotes);

// check get_totalVotes()
double check_getTotalVotes(std::vector< std::vector<int> > &voteList, std::vector<int> totalVotes);