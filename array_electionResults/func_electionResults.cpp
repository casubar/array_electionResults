#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

double sample_sum(int a, int b) {
	return a + b;
}


// read from file
/*Two files, one containing the candidates’ names and the other containing the
voting data*/

/*candidate name file format
Mia
Mickey
Donald 
Mia
Danny
Ashley 
*/
/*voting data file format:
Mia 2 34
Mickey 1 56
Donald 2 56
Mia 1 78
Danny 4 29
Ashley 4 78
-
-
-
*/

// after reading the file, store data into a vector
// string vector candidateName[]
// int vector votesByRegion[]
// int vector totalVotes[]


// get candidate name
void getCandidatesName(std::ifstream& inp,int noOfRows, std::vector<std::string> &candName) {
	std::string name;

	candName.resize(candName.size()+noOfRows);

	for (unsigned int i = 0; i < candName.size(); i++) {
		inp >> candName[i];
	}
}



void get_voteData(std::ifstream& inp, std::vector<int> vote, int listSize) {
	int a;

	std::vector<int> local_vote(listSize);

	vote.resize(vote.size() + listSize);

	for (unsigned int i = 0; i < local_vote.size(); i++) {
		inp >> local_vote[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < listSize; i++) {
		std::cout << local_vote[i] << "-";
	}
}

//------ Pass By Ref Check -------
void vect_passByRef(std::vector <int> &myVect, int listSize) {
	std::vector <int> local_vect(listSize);

	myVect.resize(myVect.size() + listSize);

	// copy contents of myVect to local_vect
	for (unsigned int i = 0; i < local_vect.size(); i++) {
		local_vect[i] = myVect[i];
	}
	// modify contents of local_vect
	for (unsigned int i = 0; i < local_vect.size(); i++) {
		local_vect[i] = myVect[i] + 1;
	}
	// update contents of myVect
	for (unsigned int i = 0; i < local_vect.size(); i++) {
		myVect[i] = local_vect[i];
	}
}

// --- From File PassByRef ----
// modify the contents of the main vector
void vect_fromFile(std::vector <int> &myVect, int listSize, std::ifstream& inp) {
	int a;
	std::vector <int> local_vect(listSize);

	myVect.resize(myVect.size() + listSize);

	// get contents from file
	inp >> a;

	// copy contents from file to local_vect
	for (unsigned int i = 0; i < local_vect.size(); i++) {
		local_vect[i] = a + 2;
	}
	// update contents of myVect
	for (unsigned int i = 0; i < local_vect.size(); i++) {
		myVect[i] = local_vect[i];
	}
}

// --- string vector passByRef ---
void vect_nameFromFile(std::ifstream& read, std::vector<std::string> &vectName, int listSize) {
	std::vector<std::string> local_name(listSize);
	std::string name;

	vectName.resize(vectName.size() + listSize);

	// get contents from file
	for (unsigned int i = 0; i < local_name.size(); i++) {
		read >> name;
		local_name[i] = name;
	}

	for (unsigned int i = 0; i < vectName.size(); i++) {
		vectName[i] = local_name[i];
	}

}