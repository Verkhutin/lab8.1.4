#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab8_1_4/lab8_1_4.cpp"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "ababab";
			string a = "a";
			int t = ThirdComma(s, a);
			Assert::AreEqual(t, 4);
		}
	};
}
