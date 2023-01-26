// 11. Write a C++ program to create a file to store Account holdername, account
// number and Balance for given number of customers. Also retrieve the values from
// the file and print it on the standard output.

#include <iostream>
#include <fstream>
using namespace std;
struct account_holder
{
    char name[20];
    double bal;
    long acc;
};
int main()
{
    int n, i;
    cout << "Enter no. of account holders \n";
    cin >> n;
    struct account_holder b[10];
    struct account_holder c[10];

    ofstream op("TextFile2.txt");
    if (!op)
    {
        cout << "Cannot open file \n";
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        cout << "enter a/c no.,name & bal of customer : " << i + 1 << "\n";
        cin >> b[i].acc >> b[i].name >> b[i].bal;
        op.write((char *)&b[i], sizeof(struct account_holder));
    }
    op.close();
    ifstream ip("TextFile2.txt");
    if (!ip)
    {
        cout << "File doesn't exists \n";
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        if (ip)
        {
            ip.read((char *)&c[i], sizeof(struct account_holder));
            cout << "A/c no : " << c[i].acc << "\n";
            cout << "Name : " << c[i].name << "\n";
            cout << "Balance (in INR) : " << c[i].bal << "\n";
        }
    }
    ip.close();
    return 0;
}
