#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab5.2\Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1;
			A(1., 2., a);
			Assert::AreEqual(-.5, a);
		}
	};
}
