// W.A.P. in Cpp which creates an users array of object to display name, rollno, grades of 10 students
// who have appeared in exams. Also make a simple one for one student.
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <string>

using namespace std;
using namespace boost::algorithm;

class Student
{
private:
    string name;
    int roll;
    char grade;

public:
    void setvalue(string, int, char);
    void disp();
};

void Student::setvalue(string n, int r, char g)
{
    name = n;
    roll = r;
    grade = g;
}

void Student::disp()
{
    cout << "Name: " << name << endl;
    cout << "Roll No.: " << roll << endl;
    cout << "Grade: " << grade << endl;
}

// Main Function
int main()
{
    Student ob[10];
    string n;
    int r;
    char g;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Name: ";
        getline(cin.ignore(), n);
        trim_left(n);
        trim_right(n);
        cout << "Enter Roll NO.: ";
        cin >> r;
        cout << "Enter Grade: ";
        cin >> g;
        ob[i].setvalue(n, r, g);
    }
    for (int i = 0; i < 10; i++)
    {
        ob[i].disp();
    }

    return 0;
}