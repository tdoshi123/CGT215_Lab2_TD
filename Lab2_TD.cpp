// Lab2_TD.cpp : This file contains the 'main' function. Program execution begins and ends there. //

#include <iostream>
using namespace std;

int main()
{
    float A;
    float B;
    float X;

    cout << "Hello, my name is Tirth Doshi and I'm going to solve the equation:\nAx + B = 0\nFor x\n";
    
    cout << "\nPlease enter a value for A: ";
    cin >> A;

    cout << "A = " << A << endl;

    cout << "\nPlease enter a value for B: ";
    cin >> B;

    cout << "B = " << B << endl;

    cout << "Solving " << A << "x + " << B << " = 0 For x..." << endl;

    X = (0 - B) / A;
        
    cout << "\nThe answer is: \nx=" << X << endl;
}
