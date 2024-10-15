#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3.it/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void Sort(int* a, const int size); 

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSortMethod)
        {
            const int SIZE = 5;
            int a[SIZE] = { 5, 1, 8, 3, 2 };

           
            Sort(a, SIZE);

      
            Assert::AreEqual(8, a[0]);
            Assert::AreEqual(5, a[1]);
            Assert::AreEqual(3, a[2]);
            Assert::AreEqual(2, a[3]);
            Assert::AreEqual(1, a[4]);
        }
    };
}
