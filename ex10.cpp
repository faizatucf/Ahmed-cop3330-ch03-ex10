/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Faiz Ahmed
 */

#include <iostream>
#include <string>
#include "std_lib_facilities.h"
using namespace std;



void calculate(string operation, double n1, double n2)
{
    double result = 0;
    if(operation == "+") //calculating addition 
        result = n1 + n2;
    else if(operation == "-")   //calculating subtraction
        result = n1 - n2;
    else if(operation == "*")   //calculating multiplication    
        result = n1 * n2;
    else if(operation == "/")   //calculating division 
        result = n1 / n2;
    else
    {
        cout << "Invalid operation.";
        return;
    }

    cout << "The result is " << result << "\n";
    
}

int main()
{
    string operation;
    double n1,n2;
    cout << "Enter operation followed by operands eg: + 5 5 \n";
    cin >> operation >> n1 >> n2; // taking input.
    calculate(operation, n1, n2);
    return 0;
}