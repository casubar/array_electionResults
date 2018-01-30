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


// get the number of candidates




// initialize votesByRegion table
void init_votesByRegion(std::vector <std::vector<int> > &regionTable, int regNum, int nameNum) {
	for (int vectRow = 0; vectRow < nameNum; vectRow++) { // for number of ROWs
		std::vector<int> vectList_reg; // vector column for region
		for (int vectCol = 0; vectCol < regNum; vectCol++) {
			vectList_reg.push_back(0); // column set to 99
		}
		regionTable.push_back(vectList_reg);
	}
}

// display votesByRegion table
void disp_votesByRegion(std::vector <std::vector<int> > table, int regNum, int nameNum) {
	for (int row = 0; row < nameNum; row++) {
		for (int col = 0; col < regNum; col++) {
			std::cout << table[row][col] << "-";
		}
		std::cout << std::endl;
	}
}

// initialize totalVotes table
void init_totalVotes(std::vector<int> &sum_votes, int nameNum) {
	sum_votes.resize(sum_votes.size() + nameNum);
	for (unsigned int row = 0; row < sum_votes.size(); row++) {
		sum_votes[row] = 99;
	}
}

// display totalVotes table
void disp_totalVotes(std::vector<int> sum_votes) {
	for (unsigned int row = 0; row < sum_votes.size(); row++) {
		std::cout << sum_votes[row] << std::endl;
	}
}




// get candidate name
void getCandidatesName(std::ifstream& inp,int noOfRows, std::vector<std::string> &candName) {
	std::string name;

	candName.resize(candName.size()+noOfRows);

	for (unsigned int i = 0; i < candName.size(); i++) {
		inp >> candName[i];
	}
}

// insertion sort name
void sort_name(std::vector<std::string> &name) {
	int location;
	std::string temp;

	location = 0;
	for (unsigned int firstOutOfOrder = 1; firstOutOfOrder < name.size(); firstOutOfOrder++) {
		if (name[firstOutOfOrder] < name[firstOutOfOrder - 1]) {
			temp = name[firstOutOfOrder];
			location = firstOutOfOrder;

			do {
				name[location] = name[location - 1];
				location--;
			} while (location > 00 && name[location - 1] > temp);
			name[location] = temp;
		}
	}
}

// display candidate name
void disp_name(std::vector<std::string> name){
	for (unsigned int i = 0; i < name.size(); i++) {
		std::cout << name[i] << std::endl;
	}
}


// ==================================================

// get vote data
void getVotes(std::ifstream& read, std::vector <int> &region, std::vector<int> &vote, int listSize) {
	int regData, voteCount, index;
	std::string name;


	std::vector<int> local_reg(listSize);
	std::vector<int> local_vote(listSize);


	index = 0;
	do {
		read >> name >> regData >> voteCount;
		local_reg[index] = regData;
		local_vote[index] = voteCount;
		index++;

	} while (!read.eof());

}
// ==================================================


// use binary search for location of candidate name from the name list
int get_name_loc(std::vector<std::string> &name, int listSize, std::string nameToSearch) {
	int first, mid, last;
	bool found;

	found = false;
	first = 0;
	mid = 0;
	last = listSize - 1;

	while (first <= last && !found) {
		mid = (first + last)/2;
		if (name[mid] == nameToSearch) {
			found = true;
		}
		else if (name[mid] > nameToSearch) {
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}
	if (found) {
		return mid;
	}
	else {
		return 99;
	}
}



// process voteData.txt
void proc_voteData(std::ifstream& read, std::vector< std::vector<int> > &voteList, std::vector<std::string> nameList ,int nameNum, int regNum ) {
	int reg, vCount, nameLoc;
	std::string cName;


	do {
		read >> cName >> reg >> vCount;
		nameLoc = get_name_loc(nameList, nameNum, cName);
		voteList[nameLoc][reg - 1] = vCount;
		//voteList[nameLoc][reg - 1] = voteList[nameLoc][reg - 1] + vCount;


	} while (!read.eof());

}


















