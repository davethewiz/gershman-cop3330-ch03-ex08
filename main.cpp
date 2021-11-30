/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Gershman
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    string status = "even";
    
    if (num % 2 != 0)
        status = "odd";
    
    cout << "The value " << num << " is an " << status << " number.";

    return 0;
}
