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



// get candidate name
void getCandidatesName(std::ifstream& inp, int noOfRows, std::vector<std::string> &candName);

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


