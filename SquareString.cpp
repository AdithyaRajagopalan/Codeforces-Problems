// A string is called square if it is some string written twice in a row.
// For example, the strings "aa", "abcabc", "abab" and "baabaa" are square.
// But the strings "aaa", "abaaab" and "abcdabc" are not square.

// For a given string s determine if it is square.

// Input
// The first line of input data contains an integer t (1≤t≤100) —the number of test cases.

// This is followed by t lines, each containing a description of one test case.
// The given strings consist only of lowercase Latin letters and have lengths between 1 and 100 inclusive.

// Output
// For each test case, output on a separate line:

// YES if the string in the corresponding test case is square, NO otherwise.
// You can output YES and NO in any case.
// (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        //For the string to be square, we need a repeated substring, so if length of substring is x,
        //Then length of input must be 2x. Thus for a square string, the length must be an even number.
        if(s.size()%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long h = s.size() / 2;
        bool sq(true);
        // Checking if the input is a string that repeats once, by comparing p'th and (p+h)'th positions.
        for(long p = 0; p < h; p++)
        {
            if(s[p] != s[h + p])
            {
                sq = false;
                break;
            }
        }
        //Printing out the result.
        cout<<(sq ? "YES" : "NO")<<std::endl;
    }
    return 0;
}