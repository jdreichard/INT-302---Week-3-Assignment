// INT302 - Week 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Add Documentation
// Dr. Joshua Reichard

#include <iostream>
using namespace std;

int main()
{

    // C and C++ are notorious for not being able to resize arrays easily. In this case, and for purposes of this assignment, we will
    // use a fixed array size to limit the number of people who can get on the elevator.

    int people_count = 0;
    int people_weights[20];
    int weight = 0;
    int totalweight = 0;

    cout << "Please enter the total number of people who will ride the elevator (up to 20): ";
    cin >> people_count;

    for (int i = 0; i < people_count; i++)
    {
        cout << "Enter weight for person #" << (i + 1) << ": ";
        cin >> people_weights[i];
    }

    // Here I want you to do another loop and iterate through the elements in the array to calculate the total
    // weight for the number of people on the elevator, then test it like we did last week.

    if (totalweight > 2500)
    {
        cout << "Unfortunately, the total weight of the people exceeds the allowable weight for the elevator.";
    }
    else
    {
        cout << "Congrats! You the elevator can accommodate the total weight of the people!";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
