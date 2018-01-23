#include "stdafx.h"
#include "CppUnitTest.h"
#include "../array_electionResults/header_electionResults.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1_electionResults
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(sampleCheck){
			Assert::AreEqual(sample_sum(3, 2), 5.0);
		}

	};
}