// 8. Design a C++ program for exception handling. Create a user defined exception classes for divide by zero and negative number input separately.

#include <iostream>
#include <cstring>

using namespace std;

class Negative_number
{
public:
    char str_what[80];
    int what;

    Negative_number(char *s, int e)
    {
        strcpy(str_what, s);
        what = e;
    }
};

class Divide_by_zero
{
public:
    char str_what[80];
    int what;

    Divide_by_zero(char *s, int e)
    {
        strcpy(str_what, s);
        what = e;
    }
};

int main()
{
    int i, nr, dr;
    try
    {
        cout << "Enter a positive number: ";
        cin >> i;
        if (i < 0)
            throw Negative_number("Not Positive", i);
    }
    catch (Negative_number e)
    { // catch an error
        cout << e.str_what << ": ";
        cout << e.what << "\n";
    }
    try
    {
        cout << "Enter the value of numerator: ";
        cin >> nr;
        cout << "Enter the value of denominator: ";
        cin >> dr;
        if (dr == 0)
            throw Divide_by_zero("Cannot divide by zero", dr);
    }
    catch (Divide_by_zero e)
    { // catch an error
        cout << e.str_what << ": ";
        cout << e.what << "\n";
    }

    return 0;
}
