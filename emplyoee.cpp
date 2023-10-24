/* Given that an employee class contains follwing data members:
employee no., name, basic salary, DA(Dearness Allowance), net salary.
Write a Cpp program to read the data of n employees and compute net salary, DA and TAX of each employee.
DA=52% of Basic Salary
TAX=30% of gross*/

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int EmployeeNum, Basic, DA, IT, NetSal;
    string EmployeeName;

public:
    void setData(int, string, int);
    void getData()
    {
        cout << "For Employee " << EmployeeNum << " Net Salary is " << NetSal << endl;
    }
};

void Employee::setData(int num, string name, int basic)
{
    int gross;
    EmployeeNum = num;
    EmployeeName = name;
    Basic = basic;
    DA = (52 * Basic) / 100;
    gross = Basic + DA;
    IT = (30 * gross) / 100;
    NetSal = gross - IT;
}

// Main Function
int main()
{
    int n, basic;
    string name;
    cout << "Enter Total Number of Employees you want to Input: ";
    cin >> n;
    Employee em[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name: ";
        getline(cin.ignore(), name);
        cout << "Enter Basic Salary: ";
        cin >> basic;
        em[i].setData(i + 1, name, basic);
    }
    for (int i = 0; i < n; i++)
    {
        em[i].getData();
    }

    return 0;
}