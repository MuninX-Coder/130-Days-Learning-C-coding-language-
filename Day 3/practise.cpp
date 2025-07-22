#include <iostream>
#include <string>
using namespace std;

int main()
{
    //  Problem 1: Declare and Print an Integer
    int age = 17;
    cout << "My age is : " << age << endl;

    //   Problem 2: Declare and Print a Float
    float pi = 3.14;
    cout << "The value of pi is :" << pi << endl;

    // Problem 3: Declare a Double and Compare It to Float
    double new_PI = 3.14343;
    float New_pi = 3.14;

    cout << "value of pi by double " << new_PI << endl;
    cout << "value of pi by float " << New_pi << endl;

    // Problem 4: Declare and Print a Char

    char My_letter = 'M';
    cout << "My letter is: " << My_letter << endl;

    //  Problem 5: Declare a Bool

    bool isPassed = true;
    cout << "IS Munin borah is passed : " << isPassed << endl;

    //  Problem 6: Multiple Variable Declaration in one line
    int agee, height, weight;
    agee = 17;
    height = 5.4;
    weight = 50;

    cout << "My age is: " << agee << endl;
    cout << "my height: " << height << endl;
    cout << "my weight: " << weight << endl;

    // 🔹 Problem 7: Print Your Initials
    char firstInitail = 'M';
    char secinitial = 'B';

    cout << "My full initial : " << firstInitail << secinitial << endl;

    //  Problem 8: Create a Simple Report Card

    int Myclass = 12;
    string subject = "computer";
    int Mymarks = 99;
    char Mygrade = 's';

    cout << "My class : " << Myclass << endl;
    cout << "My subject : " << subject << endl;
    cout << "My marks : " << Mymarks << endl;
    cout << "My grade : " << Mygrade << endl;

    // Problem 10: Combine All Data Types
    // Create a program that uses:

    // int for age

    // float for height

    // double for weight

    // char for gender

    // bool for isStudent

    int Newage = 18;
    float Newheight = 5.9;
    double Newweight = 60;
    char gender = 'M';
    bool isSTUDENT = true;

    cout << "My age : " << Newage << endl;
    cout << "my height : " << Newheight << endl;
    cout << "my weight : " << Newweight << endl;
    cout << "my gender : " << gender << endl;
    cout << "is student : " << isSTUDENT << endl;
    return 0;
}