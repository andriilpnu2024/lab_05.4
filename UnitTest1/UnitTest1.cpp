#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s;
			s=S0(22);
			Assert::AreEqual(s , 1.41421 , 0.00001);
		}
	};
}
