/****************************************************
  Julio Arita 25/06/2023      
        
    Definition of our unit test    

    THIS IS INCOMPLETE.                 
****************************************************/



#include <iostream>
#include <cassert>
#include "ConcatRemove.h" 
using namespace std;


// Performing unit tests with different cases
void test_ConcatRemove() {
    char s1[] = "abcdefghijklmnropqstuvwxyz";
    char t1[] = "abcdefghijklmnropqstuv";
    int k1 = 33;
    assert(ConcatRemove(s1, t1, k1) == "Yes");

    char s2[] = "abcdtasdfa";
    char t2[] = "def";
    int k2 = 6;
    assert(ConcatRemove(s2, t2, k2) == "No");

    char s3[] = "calisthenic";
    char t3[] = "calisthen";
    int k3 = 3;
    assert(ConcatRemove(s3, t3, k3) == "No");
}

int main() {
    test_ConcatRemove();
    return 0;
}
