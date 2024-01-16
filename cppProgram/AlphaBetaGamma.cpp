#include <iostream>
using namespace std;

// first base class
class Alpha
{

public:
    // first base class's Constructor
    Alpha()
    {
        cout << "Inside Alpha base class" << endl;
    }
};

// second base class
class Beta
{
public:
    // second base class's Constructor
    Beta()
    {
        cout << "Inside Beta base class" << endl;
    }
};

// Gamma class inherits Alpha and Beta
class Gamma : public Alpha, public Beta
{
public:
    // Gamma class's Constructor
    Gamma()
    {
        cout << "Inside Gamma class" << endl;
    }
};

int main()
{

    // creating object of class Gamma
    Gamma obj1;
    return 0;
}
