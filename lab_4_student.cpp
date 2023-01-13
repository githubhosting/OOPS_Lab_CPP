// 4.) Write a C++ program to define a student class with data members usn, name and marks   of 3 subjects. And member functions to read, display, and to calculate average of best 2 marks. Also find who is the topper among “n” no. of students.

#include<iostream>
using namespace std;
class stud
{
	char usn[20], name[30];
	float marks[3];
	int i;
public:
	float avg;
	void read();
	void calc(int);
	void disp();
};
void stud::read()
{
	cout<<"\nEnter USN no.: ";
	cin>>usn;
	cout<<"\nEnter name: ";
	cin>>name;
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter the marks of subject "<<i+1<<": ";
		cin>>marks[i];
	}
}
void stud::calc(int n)
{
	int sum=0,min=marks[0];
	for(i=0;i<n;i++)
	{
		sum+=marks[i];
		if(min>=marks[i])
			min=marks[i];
	}
	avg=float(sum-min)/2;
}
void stud::disp()
{
	cout<<usn<<"\t"<<name<<"\t";
	for(i=0;i<3;i++)
		cout<<marks[i]<<"\t\t";
	cout<<avg<<"\n";
}
int main()
{
	int n,topper,i,z;
	float max=0;
	cout<<"\nEnter the number of students: ";
	cin>>n;
	stud s[n];
	for(i=0;i<n;i++)
	{
		s[i].read();
		s[i].calc(n);
	}
	cout<<"USN\tName\t";


	for(i=0;i<3;i++)
	{
		cout<<"Marks "<<i+1<<"\t";
	}
	cout<<"Avg.\n";
	for(i=0;i<n;i++)
		s[i].disp();
	for(i=0;i<n;i++)
	{
		if(max<s[i].avg)
		{
			max=s[i].avg;
			topper=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[topper].avg==s[i].avg)
		{
			cout<<"\nThe toppers is student "<<i+1<<": ";
			cout<<"\nDetails:-\n";
			s[i].disp();
		}
	}
}


