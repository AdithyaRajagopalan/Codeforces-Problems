// You are given two positive integers a and b. In one move you can increase a by 1(replace a with a+1).
// Your task is to find the minimum number of moves you need to do in order to make a divisible by b.
// It is possible, that you have to make 0 moves, as a is already divisible by b.
// You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤104) — the number of test cases.
// Then t test cases follow.

// The only line of the test case contains two integers a and b (1≤a,b≤109).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a 
// divisible by b.


#include <iostream>
#include <vector>
 
int main() {
    int numOfInputs = 0;
    std::cin>>numOfInputs;
    int a = 0;
    int b = 0;
    std::vector<int> finalAnswers;
    for (int i = 0; i < numOfInputs ; i++) {
        std::cin>>a;
        std::cin>>b;
    //     for (int j = a;; j++) {
    //         if (j%b == 0) {
    //             finalAnswers.push_back(j-a);
    //             break;
    //         }
    //         else {
    //             continue;              
    //         }
    //    }
    if (a%b == 0) {
        finalAnswers.push_back(0);
    }
    else {
        finalAnswers.push_back(((int(a/b)+1)*b)-a);
    }
    }
    for(int i : finalAnswers) {
        std::cout<<i<<std::endl;
    }
    return 0;
}