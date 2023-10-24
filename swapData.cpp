#include <iostream>
using namespace std;

class Class_2; // Forward declaration of Class_2

class Class_1
{
private:
    int data;

public:
    Class_1(int val) : data(val) {}

    void disp()
    {
        cout << data;
    }

    friend void swapData(Class_1 &obj1, Class_2 &obj2);
};

class Class_2
{
private:
    int data;

public:
    Class_2(int val) : data(val) {}

    void disp()
    {
        cout << data;
    }

    friend void swapData(Class_1 &obj1, Class_2 &obj2);
};

// Friend function to swap private data members of Class_1 and Class_2
void swapData(Class_1 &obj1, Class_2 &obj2)
{
    int temp = obj1.data;
    obj1.data = obj2.data;
    obj2.data = temp;
}

int main()
{
    Class_1 obj1(10);
    Class_2 obj2(20);

    cout << "Before swapping:" << endl;
    cout << "Class_1 data: ";
    obj1.disp();
    cout << endl;
    cout << "Class_2 data: ";
    obj2.disp();
    cout << endl;

    swapData(obj1, obj2);

    cout << "After swapping:" << endl;
    cout << "Class_1 data: ";
    obj1.disp();
    cout << endl;
    cout << "Class_2 data: ";
    obj2.disp();
    cout << endl;

    return 0;
}
