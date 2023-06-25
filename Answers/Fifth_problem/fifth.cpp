#include <iostream>
#include <cassert>
#include "ConcatRemove.h" // Assuming the function is defined in a separate header file
using namespace std;

void test_ConcatRemove() {
    char s1[] = "abcdefghijklmnropqstuvwxyz";
    char t1[] = "abcdefghijklmnropqstuvwxyzssss";
    int k1 = 33;
    assert(ConcatRemove(s1, t1, k1) == "Yes");

    char s2[] = "abc";
    char t2[] = "def";
    int k2 = 6;
    assert(ConcatRemove(s2, t2, k2) == "Yes");

    char s3[] = "abc";
    char t3[] = "def";
    int k3 = 5;
    assert(ConcatRemove(s3, t3, k3) == "No");
}

int main() {
    test_ConcatRemove();
    cout << "All tests passed." << endl;
    return 0;
}
