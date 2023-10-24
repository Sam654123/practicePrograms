#include <iostream>

using namespace std;

class Sample
{
    int id;

public:
    void init(int x)
    {
        id = x;
    }
    Sample() {}

    Sample(Sample &t)
    {
        id = t.id;
    }
    void display()
    {
        cout << "ID = " << id << endl;
    }
};

// Main Function
int main()
{
    Sample obj1;
    cout << "Initialising Object 1" << endl
         << "Object 1 ";
    obj1.init(10);
    obj1.display();

    cout << "Copying Object 1 to Object 2 using Copy Constructor" << endl
         << "Object 2 ";
    Sample obj2 = obj1;
    obj2.display();
    return 0;
}
