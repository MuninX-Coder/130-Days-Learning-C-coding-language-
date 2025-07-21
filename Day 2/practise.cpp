#include <iostream>
using namespace std;

int main()
{
    // Problem 1: Hello Again

    cout << "Welcome Back! Munin " << endl;

    // 🔹 Problem 2: Without using namespace std;

    std::cout << "welcome back again! Munin " << endl;

    //  Problem 3: Your Details
    cout << "Name : Munin" << endl;
    cout << "Age  : 17" << endl;
    cout << "City : lakhimpur " << endl;

    //  Problem 4: Using Tabs  (\t)
    cout << "subject  :\tMarks" << endl;
    cout << "English  :\t78" << endl;
    cout << "Hindi    :\t78" << endl;
    cout << "social   :\t65" << endl;
    cout << "Maths    :\t54" << endl;
    cout << "computer :\t88" << endl;
    cout << "science  :\t68" << endl;

    //  Problem 5: With and Without endl, Print three lines with and without endl and observe the difference.

    cout << "line 1" << endl;
    cout << "line 2" << endl;
    cout << "line 3" << endl;

    cout << "line 1 ";
    cout << "line 2 ";
    cout << "line 3 ";

    // 🔹 Problem 6: Using std::cout and std::endl Only, Write a full program using std::cout and std::endl only (no using namespace std;) that prints your top 3 favorite things.

    std::cout << "Things 1" << std::endl;
    std::cout << "Things 2" << std::endl;
    std::cout << "Things 3" << std::endl;

    //  Problem 7: Line Decoration, Create a design using * or -.

    cout << "*****************************************" << endl;
    cout << "***********************" << endl;
    cout << "**************" << endl;
    cout << "Munin Borah" << endl;
    cout << "**************" << endl;
    cout << "***********************" << endl;
    cout << "*****************************************" << endl;

    //  Problem 8: C++ Syntax Art
    cout << "*----------*" << endl;
    cout << "||  C++ ||" << endl;
    cout << "*----------*" << endl;


    //  Problem 9: Commenting, Write a program with both single-line (//) and multi-line (/* */) comments explaining each part.
    cout << "comments" << endl;  // cout is used to display output in the screen

    /*
    cout is used to display output in the screen
    */



    // 🔹 Problem 10: Print Quote with Attribution, 
    cout << "Success is not final, failure is not fatal." << endl;
    cout << " -- Winston Churchill" << endl;


    return 0;
}