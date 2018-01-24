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



// get list size
unsigned int get_listSize(std::ifstream &readFile) {
	std::vector <std::string> list;
	std::string name;
	unsigned int listSize;

	do {
		readFile >> name;
		list.push_back(name);
	} while (!readFile.eof());

	return listSize = list.size();
}

// get candidate name
void getCandidatesName(std::ifstream& inp, std::string cNames[],int noOfRows) {
	int i;

	std::vector<std::string> local_name(noOfRows);

	for (i = 0; i < noOfRows; i++)
		inp >> cNames[i];

	for (int i = 0; i < noOfRows; i++) {
		local_name[i] = cNames[i];
	}

	for (int i = 0; i < noOfRows; i++) {
		std::cout << local_name[i] << std::endl;
	}


	
}

void get_name(std::ifstream& read, std::vector <std::string> nameList, int listSize) {
	
	std::vector<std::string> local_name(listSize); // initialize local vector
	
	// store value to local vector then copy contents to nameList[]
	



	/*for (int i = 0; i < listSize; i++) {
		read >> local_name[i];
		nameList[i] = local_name[i];
	}*/

	nameList.push_back("charlie");
	for (unsigned int i = 0; i < nameList.size(); i++) {
		std::cout << nameList[i] << "-" << std::endl;
	}
}

void get_voteData(std::ifstream& inp, std::vector<int> vote, int listSize) {
	int a;

	std::vector<int> local_vote(listSize);

	vote.resize(vote.size() + listSize);

	for (unsigned int i = 0; i < local_vote.size(); i++) {
		inp >> local_vote[i];
	}

	//vote.resize(vote.size() + listSize);
	//inp >> a;
	//std::cout << a;
	std::cout << std::endl;
	for (int i = 0; i < listSize; i++) {
		local_vote[i] = local_vote[i] + 1;
	}
	for (int i = 0; i < listSize; i++) {
		std::cout << local_vote[i] << "-";
	}
}



//---------- Pass By Ref Check ---------------
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


// read from file
void readName_fromFile(std::ifstream readFile, std::vector <std::string> &nameList, int listSize) {
	
	std::vector <std::string> local_list;

}