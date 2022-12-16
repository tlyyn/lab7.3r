#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.3r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int** arr = new int* [2];
			arr[0] = new int[3] {0, 1, 4};
			arr[1] = new int[3] {0, -777, 0};
			int c = FindCountZeroRow(arr, 1, 3, 0);
			Assert::AreEqual(2, c);
		}
	};
}