#pragma once
#include <vector>



// get candidate name
void getCandidatesName(std::ifstream& inp, int noOfRows, std::vector<std::string> &candName);



void get_voteData(std::ifstream& read, std::vector<int> vote, int listSize);


//---------- Pass By Ref Check ---------------
void vect_passByRef(std::vector <int> &myVect, int listSize);

// --- From File PassByRef ----
void vect_fromFile(std::vector <int> &myVect, int listSize, std::ifstream& inp);

// --- string vector passByRef ---
void vect_nameFromFile(std::ifstream& read, std::vector<std::string> &vectName, int listSize);

