#include "stdafx.h"
#include "CppUnitTest.h"
#include "../array_electionResults/header_electionResults.h"

#include <fstream>
#include <vector>
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

std::ifstream read;
std::ofstream write;




namespace UnitTest1_electionResults
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		

	
		
		TEST_METHOD(listSize_check){
			
			read.open("names.txt");
			Assert::AreEqual(get_listSize(read), 6.0);
		}

	};
}