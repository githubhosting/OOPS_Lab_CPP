// 2 . Write a C++ program to implement stack using classes and objects and perform the following functions:
// Push
// Pop
// Display

#include<iostream>
using namespace std;
#define size 5
class stack
{
	int stck[size];
	int tos;
public:
	void init();
	void push();
	int pop();
	void display();
};
void stack::init()
{
	tos=0;
}
void stack::push()
{
	int i;
	if(tos==size)
	{
		cout<<"Stack Overflow \n";
		return;
	}
	cout<<"Enter Element \n";
	cin>>i;
	stck[tos]=i;
	tos++;
}
int stack::pop()
{	
	if(tos==0)
	{
		cout<<"Stack Snderflow \n";
		return 1;
	}
	tos--;
	cout<<"Popped Element is"<<stck[tos];
	return 0;
}
void stack::display()
{
	if(tos==0)
	{
		cout<<"Stack Empty \n";
		return;
	}
	cout<<"\n Elements are: ";
	for(int i=0;i<tos;i++)
	{
		cout<<stck[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	int ch,i;
	stack s;
	s.init();
	while(1)
	{
		cout<<"\n1.Push 2.Pop 3.Display \n";
		cin>>ch;
		switch(ch)
		{
		case 1:s.push();
			break;
		case 2:s.pop();
			break;
		case 3:s.display();
			break;
		default: return 0;
		}
	}
}


