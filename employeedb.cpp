// 3 Write a C++ program to read the data of n employee and compute net salary of each employee using pointer. Given that an employee class contains following :-

// Data members: 	Employee no, Employee name, Basic salary, DA, IT, 
// Net salary, gross salary

// Member functions: To read data, to calculate net salary and to print data
// [DA = 52% of basic salary, IT = 30% of gross salary,
//      Gross salary = DA + Basic, Net salary = DA + Basic – IT].


#include<iostream>
using namespace std;
class employee
{
	int num, basic;
	long da, it, netsal, gsal;
	char name[20];
public:
	void read();
	void disp();
	void calc();
};

void employee::read()
{
	cout<<"Enter Employee id, Name & Basic Salary \n";
	cin>>num>>name>>basic;
}
void employee::calc()
{
	da=(0.52)*basic;
	gsal=da+basic;
	it=(0.3)*gsal;
	netsal=basic+da-it;
}
void employee::disp()
{
	cout<<num<<"\t"<<name<<"\t\t"<<basic<<"\t\t"<<da<<"\t\t"<<it<<"\t\t"<<gsal<<"\t"<<netsal<<"\n";
}
int main()
{
	int n;
	cout<<"\n Enter no. of Employee: ";
	cin>>n;
	employee e[n],*p;
	for(int i=0;i<n;i++)
	{
		p=&e[i];
		p->read();
		p->calc();
	}
	cout<<"sl no. id\t    Name \t\t Basic Salary\t\t DA\t\t Gross Salary\t  Income Tax\t Net Salary\n";
	for(int i=0;i<n;i++)
	{
		p=&e[i];
		p->disp();
	}
	return 0;
}



