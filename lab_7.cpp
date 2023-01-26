// 7. Design a C++ program for a hospital to create a database regarding its
// indoor patients. (Identify the member function). create a base class to store
// above information, member function should include functions to enter
// information and display list of all the patients in the database. Create a
// derived class to store the information about paediatric patients (less than12yrs age).

#include <iostream>

using namespace std;

struct date
{
    int d;
    int m;
    int y;
};

class hospital
{
    char name[100];
    struct date d_adm;
    struct date d_dis;

protected:
    int age;

public:
    void getdata()
    {
        cout << "Enter name of the patient: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter date of admission: ";
        cin >> d_adm.d >> d_adm.m >> d_adm.y;
        cout << "Enter date of discharge: ";
        cin >> d_dis.d >> d_dis.m >> d_dis.y;
    }
    void display()
    {
        cout << name << "\t";
        cout << age << "\t";
        cout << d_adm.d << '-' << d_adm.m << '-' << d_adm.y << "\t \t";
        cout << d_dis.d << '-' << d_dis.m << '-' << d_dis.y;
    }
};

class pediatric_patient : public hospital
{
    char vaccine[20];

public:
    void get()
    {
        getdata();
        cout << "enter the name of vaccine to be given \n";
        cin >> vaccine;
    }
    void put()
    {
        if (age < 12)
        {
            display();
            cout << "\t"
                 << "\t";
            cout << vaccine;
            cout << "\n";
        }
        else
            cout << "age greater than 12 not a pediatric patient";
    }
};
int main()
{
    hospital h[5];
    int n;
    cout << "Enter the number of patients \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        h[i].getdata();
    }
    cout << "Patient database \n";
    cout << "NAME"
         << "\t"
         << "AGE"
         << "\t"
         << "DATE_OF_ADMISSION "
         << "\t"
         << "DATE_OF_DISCHARGE \n";
    for (int i = 0; i < n; i++)
    {
        h[i].display();
        cout << "\n";
    }
    pediatric_patient a1[5];
    cout << "Enter the number of pediatric patients \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a1[i].get();
    }
    cout << "pediatric Patient database \n";
    cout << "NAME"
         << "\t"
         << "AGE"
         << "\t"
         << "DATE_OF_ADMISSION "
         << "\t"
         << "DATE_OF_DISCHARGE"
         << "\t"
         << "VACCINE \n";
    for (int i = 0; i < n; i++)
    {
        a1[i].put();
    }
    return 0;
}
