#include "stdafx.h"
#include "CppUnitTest.h"
#include "../array_electionResults/header_electionResults.h"

#include <fstream>
#include <vector>
#include <iostream>
#include <string.h>
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;




std::ofstream write;
std::ifstream read("names.txt");





namespace UnitTest1_electionResults
{		

	TEST_CLASS(electionResultsUnitTest)
	{
	public:
		//-----------------------------
		TEST_METHOD(testSum){
			int a, b;
			double sum;

			a = 3;
			b = 2;
			sum = a + b;

			Logger::WriteMessage("In test_sum...check values in a and b");
			Assert::AreEqual(sum, 5.0, L"charlie error");
		}
		TEST_METHOD(testDiff) {
			int a, b;
			double diff;

			a = 12;
			b = 5;
			diff = a - b;
			Assert::AreEqual(diff,7.0, L"answer wrong");	
		}
		TEST_METHOD(testString) {
			Logger::WriteMessage("In test_char.....check values of string");
			Assert::AreEqual("charlie", "charlie", L"asubar");
		}
		TEST_METHOD(readName_check) {
			Logger::WriteMessage("in readName()");
			double a;
		
				std::ifstream read("names.txt");
				std::string name;
				read >> name;
				if (name == "Mia") {
					a = 1;
				}
				else {
					a = 99;
				}
			
			Assert::AreEqual(a, 99.0);
		}
		TEST_METHOD(getTotalVotes_check) {
			std::vector< std::vector<int> > voteTable;
			std::vector<int> vTotal;
			int vTotal_perRow;

			for (int row = 0; row < 7; row++) {
				std::vector<int> vectCol;
				vectCol.push_back(0);
				vectCol.push_back(30);
				vectCol.push_back(0);
				vectCol.push_back(70);

				voteTable.push_back(vectCol);
			}
	
			for (int row = 0; row < 7; row++) {
				vTotal_perRow = 0;
				for (int col = 0; col < 4; col++) {
					vTotal_perRow = vTotal_perRow + voteTable[row][col];
				}
				vTotal.push_back(vTotal_perRow);
			}

			Assert::AreEqual(voteTable[0][3], 70, L"wrong value at [0][3]");
			Assert::AreEqual(vTotal[0], 100, L"wrong row total at [0]");
			Assert::AreEqual(vTotal[5], 100, L"wrong row total at [5]");

		}
	

	};
}