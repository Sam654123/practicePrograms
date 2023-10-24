#include <iostream>

using namespace std;

class nest
{
    int a;
    int square()
    {
        return a * a;
    }
    int cube()
    {
        return a * a * a;
    }

public:
    void input()
    {
        cout << "\nEnter a number: ";
        cin >> a;
    }
    void disp()
    {
        int sq = square(); // nesting of member function
        int cu = cube();   // nesting of member function
        cout << "The square of " << a << " is " << sq << endl;
        cout << "The cube of " << a << " is " << cu << endl;
    }
};

// Main Function
int main()
{
    nest n1;
    n1.input();
    n1.disp();

    return 0;
}