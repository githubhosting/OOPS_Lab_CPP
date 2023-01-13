// 5) Design a C++ program to keep the track of the number of objects of a particular class type that are inexistence using a static variable.

#include <iostream>
using namespace std;

class Counter 
{
public:
	static int count;
	Counter() { count++; }
	~Counter() { count--; }
};

int Counter::count;
void f();

int main(void)
{
	Counter o1;
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	Counter o2;
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	f();
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	return 0;
}

void f()
{
	Counter temp;
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	// temp is destroyed when f() returns
}



