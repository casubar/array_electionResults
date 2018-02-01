#include "stdafx.h"
#include "CppUnitTest.h"
#include "../array_electionResults/header_electionResults.h"

#include <fstream>
#include <vector>
#include <iostream>
#include <string.h>

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
	

	};
}