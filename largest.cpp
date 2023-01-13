// 1) (a) Write a c++ program to find the largest of three numbers.
#include<iostream>
using namespace std;
inline float lar(float a, float b ,float c)
{
	return ((a>b&&a>c)?a:b>c?b:c);
}
int main()
{
	float x,y,z;
	cout<<"\nEnter three numbers:\n";
	cin>>x>>y>>z;
	cout<<"Largest number is : "<<lar(x,y,z);	
	return 0;
}

