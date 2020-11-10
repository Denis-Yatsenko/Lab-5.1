#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			c = f(0);
			Assert::AreEqual (c, 1);

		}
	};
}
