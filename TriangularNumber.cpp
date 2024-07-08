// A triangular number is the number of dots in an equilateral triangle uniformly filled with dots.
// For example, three dots can be arranged in a triangle; thus three is a triangular number.
// The n-th triangular number is the number of dots in a triangle with n dots on a side. 
// You can learn more about these numbers from Wikipedia (http://en.wikipedia.org/wiki/Triangular_number).

// Your task is to find out if a given integer is a triangular number.

// Input
// The first line contains the single number n (1 ≤ n ≤ 500) — the given integer.

// Output
// If the given integer is a triangular number output YES, otherwise output NO.


#include <iostream>
 
int main() {
    int inpNumber = 0;
    bool isTriangleNum = false;
    std::cin>>inpNumber;
    for (int i = 1; i <= inpNumber ; i++) {
        if (inpNumber == (i*(i+1))/2) {
            std::cout<<"YES";
            isTriangleNum = true;
            break;
        }
    }
    if (isTriangleNum == false) {
        std::cout<<"NO";
    }
}