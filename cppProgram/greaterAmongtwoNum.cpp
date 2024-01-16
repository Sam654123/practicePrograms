#include <iostream>

// Forward declaration of the class
class SecondNumber;

class FirstNumber
{
private:
    int num1;

public:
    FirstNumber(int n1) : num1(n1) {}

    // Declare the friend function inside the class
    friend void findGreater(FirstNumber, SecondNumber);
};

class SecondNumber
{
private:
    int num2;

public:
    SecondNumber(int n2) : num2(n2) {}

    // Declare the friend function inside the class
    friend void findGreater(FirstNumber, SecondNumber);
};

// Define the friend function outside the classes
void findGreater(FirstNumber n1, SecondNumber n2)
{
    if (n1.num1 > n2.num2)
    {
        std::cout << "First number is greater: " << n1.num1 << std::endl;
    }
    else if (n1.num1 < n2.num2)
    {
        std::cout << "Second number is greater: " << n2.num2 << std::endl;
    }
    else
    {
        std::cout << "Both numbers are equal: " << n1.num1 << std::endl;
    }
}

int main()
{
    int first, second;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Enter the second number: ";
    std::cin >> second;

    FirstNumber num1(first);
    SecondNumber num2(second);

    // Call the friend function to find the greater number
    findGreater(num1, num2);

    return 0;
}
