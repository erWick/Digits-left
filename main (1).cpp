/*
Erik Hall 101115254
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter your number (0 < n < 10000): ";
    cin >> input;

    cout << ( input < 10? "The number has 1 digit" : "");
    cout << ( input < 100 && input >= 10 ? "The number has 2 digits" : "");
    cout << ( input < 1000 && input >= 100 ? "The number has 3 digits" : "");
    cout << ( input < 10000 && input >= 1000 ? "The number has 4 digits" : "");
    
    return 0;
}