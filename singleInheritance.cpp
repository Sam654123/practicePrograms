#include <iostream>

class Base
{
protected:
    int num1, num2;

public:
    void getInput()
    {
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;
    }
};

class Derived : public Base
{
public:
    void displaySum()
    {
        int sum = num1 + num2;
        std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    }
};

int main()
{
    Derived obj;
    obj.getInput();
    obj.displaySum();
    return 0;
}
