#include <iostream>
#include <cstring>

using namespace std;

int a_mid = 12;
int a_final = 100;

int b_mid = 100;
int b_final = 100;

int arr_mid[100];
int arr_final[100];

float calculateAverage(int mid_s, int final_s)
{
    return mid_s * 0.4f + final_s * 0.6f;
}

int main()
{

/// OOP - Object Oriented Programming
    cout << calculateAverage(a_mid, b_final) << endl;

/// ##Procedual Programming
///     - Collection of Functions
///     - Data is declared separately
///     - Data is passed as arguments into functions
///
/// ##Limitations
///     - Functions need to know the structure of the data
///     - Difficult to understand, maintain, extend, debug,
///       resue code, and easier to break as program get larger

/// ##OOP?
///     - Classes and Objects
///     - Encapsulation

    char aCString[] = "My first girlfriend turned into the moon.";

    string aCPPString = "That's rough, buddy."; // Object (using class)

    cout << strlen(aCString) << endl;
    cout << aCPPString.length() << endl;

    int soCalledString[] = {1, 2, 3, 4};
    //count << strlen(soCalledString) << endl;
    //cout << sizeof(soCalledString) / sizeof(soCalledString[0]) << endl;


///     - Information Hiding (logic or data)
///     - Reusability
///     - Inheritance (creating new classes by using existing classes)
///     - Polymorphism
///     - others



/// ##What is Class?
///     - Blueprint
///     - User Defined Data Type (Not like int, char(primitive), like string, vector)
///     - includes public, private, and protected attributes(data) and methods(functions)
///     - can hide data and methods
///     - provide a public interface


/// ##What is Objects?
///     - created from a class
///     - represents a specific instance of a class
///     - can create many objects as you need using one class
///     - own identity
///     - each can use the defined class method

    return 0;
}
