/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Rubio
 */

#include <iostream>

using namespace std;

int main() 
{
    int number;
    string result;

    cout << "Please enter a whole number: ";
    cin >> number;

    if ((number % 2) == 0)  
    {
        result = "even";
    }
    else if ((number % 2) == 1) 
    {
        result = "odd";
    }

    cout << "The value " << number << " is an " << result << " number." << endl;

    return 0;
}