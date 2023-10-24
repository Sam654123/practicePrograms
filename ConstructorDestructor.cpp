#include <iostream>

using namespace std;

class Z
{
public:
	// Constructor
	Z()
	{
		cout << "Constructor is called" << endl;
	}

	// Destructor
	~Z()
	{
		cout << "Destructor is called" << endl;
	}
};

// Main Function
int main()
{
	cout << "z1 is being created." << endl;
	Z z1;
	{
		cout << "z2 is being created." << endl;
		Z z2;
		cout << "z2 is going to be destroyed." << endl;
	}
	cout << "z1 is going to be destryoed" << endl;
}
