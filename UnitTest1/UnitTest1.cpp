#include "pch.h"
#include "CppUnitTest.h"
#include "..\\glab6.2.rek\lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab6
{
    TEST_CLASS(ArrayTests)
    {
    public:

        TEST_METHOD(FindSmallestEvenElementRecursive)
        {
            const int n = 10;
            int arr[n] = { 5, 7, 9, 2, -3, 2, 3, 4, 56, -5 };

            //  для знаходження найменшого парного елемента
            int result = findSmallestEvenElementRecursive(arr, n, 0, INT_MAX);

            
            Assert::AreEqual(2, result);
        }

       
    };
}
