#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_8.2/PR_8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* s = "";
			Assert::AreEqual(0, CountWords(s));
		}

		TEST_METHOD(TestMethod2)
		{
			const char* s = "hello    world";
			Assert::AreEqual(2, CountWords(s));
		}
	};
}
