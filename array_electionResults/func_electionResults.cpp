#include "stdafx.h"
#include <iostream>
#include <fstream>

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