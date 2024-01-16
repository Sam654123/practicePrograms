#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265;

// Function to calculate the area of a rectangle
float calculateArea(float length, float width)
{
    return length * width;
}

// Function to calculate the area of a circle
double calculateArea(double radius)
{
    return PI * radius * radius;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, bool isTriangle = true)
{
    if (isTriangle)
    {
        return 0.5 * base * height;
    }
    else
    {
        std::cerr << "Invalid input for triangle area calculation." << std::endl;
        return 0.0;
    }
}

int main()
{
    double radius, base, height;
    float length, width;

    // Rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    double rectangleArea = calculateArea(length, width);
    cout << "Area of the rectangle: " << rectangleArea << std::endl;

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circleArea = calculateArea(radius);
    cout << "Area of the circle: " << circleArea << std::endl;

    // Triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double triangleArea = calculateArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;

    return 0;
}
