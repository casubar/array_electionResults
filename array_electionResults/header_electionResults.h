#pragma once
#include <vector>

// get list size
unsigned int get_listSize(std::ifstream readFile);

// read from file
void readName_fromFile(std::ifstream readFile, std::vector <std::string> &nameList, int listSize);

// get candidate name
void getCandidatesName(std::ifstream& inp, std::string cNames[], int noOfRows);

void get_name(std::ifstream& read, std::vector <std::string> nameList, int listSize);

void get_voteData(std::ifstream& read, std::vector<int> vote, int listSize);


//---------- Pass By Ref Check ---------------
void vect_passByRef(std::vector <int> &myVect, int listSize);

// --- From File PassByRef ----
void vect_fromFile(std::vector <int> &myVect, int listSize, std::ifstream& inp);
