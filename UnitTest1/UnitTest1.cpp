#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№8.1.char/AP_Lab№8.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
    TEST_CLASS(CharArrayTests) {
public:
    TEST_METHOD(TestCharCount) {
        char str[] = "while doing while loop while";
        int result = Count(str);
        Assert::AreEqual(3, result);
    }

    TEST_METHOD(TestCharChange) {
        char str[100] = "while doing while loop while";
        char* result = Change(str);
        Assert::IsTrue(strcmp("*** doing *** loop ***", result) == 0);
        delete[] result;
    }
    };
}