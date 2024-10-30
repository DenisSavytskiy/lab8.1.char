#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int Count(char* s) {
    int k = 0, pos = 0;
    char* t;
    while (t = strstr(s + pos, "while")) {
        k++;
        pos = t - s + 1;
    }
    return k;
}

char* Change(char* s) {
    size_t len = strlen(s);
    char* t = new char[len * 2];
    char* p;
    int pos1 = 0, pos2 = 0;
    t[0] = '\0';

    while (p = strstr(s + pos1, "while")) {
        pos2 = p - s + 5;
        strncat_s(t, len * 2, s + pos1, p - s - pos1);
        strcat_s(t, len * 2, "***");
        pos1 = pos2;
    }
    strcat_s(t, len * 2, s + pos1);
    strcpy_s(s, len * 2, t);
    return t;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of 'while'" << endl;
    char* dest = new char[151];
    dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}