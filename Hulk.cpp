// Dr. Bruce Banner hates his enemies (like others don't).
// As we all know, he can barely talk when he turns into the incredible Hulk.
// That's why he asked you to help him to express his feelings.
// Hulk likes the Inception so much, and like that his feelings are complicated. 
//They have n layers. The first layer is hate, second one is love, third one is hate and so on...
// For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", 
//and if n = 3 it's "I hate that I love that I hate it" and so on.
// Please help Dr. Banner.
// Input
// The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.
// Output
// Print Dr.Banner's feeling in one line.

#include <bits/stdc++.h>
 
int main()
{
    int numOfLayers;
    //Taking input for number of layers
    std::cin>>numOfLayers;
    //Directly handle first line of output
    if(numOfLayers == 1) {
        std::cout<<"I hate it";
    }
    else if(numOfLayers > 1) {
        std::cout<<"I hate that";
    }
    //Loop which prints repetitive lines based on user input
    for(int i = 2; i < numOfLayers; i++)
    {
        if(i%2==1 && i!=numOfLayers) {
            std::cout<<" I hate that";
        }
        else if(i%2==0 && i!=numOfLayers) {
            std::cout<<" I love that";
        }
    }
    //Handle last line of output
    if(numOfLayers%2 == 0 && numOfLayers > 1) {
        std::cout<<" I love it";
    }
    else if(numOfLayers > 1) {
        std::cout<<" I hate it";
    }
    return 0;
}