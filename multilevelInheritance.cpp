#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int id;
    std::string name;

public:
    void acceptDetails()
    {
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter student name: ";
        getline(cin.ignore(), name);
    }

    void displayDetails()
    {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};

class StudentExam : public Student
{
protected:
    float marks[4];

public:
    void acceptMarks()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Marks for subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class StudentResult : public StudentExam
{
public:
    float calculatePercentage()
    {
        float totalMarks = 0.0;
        for (int i = 0; i < 4; i++)
        {
            totalMarks += marks[i];
        }
        return (totalMarks / 4.0);
    }
};

int main()
{
    StudentResult student;

    student.acceptDetails();
    student.acceptMarks();

    cout << "\nStudent Details:\n";
    student.displayDetails();
    cout << "\nStudent Exam Marks:\n";
    student.displayMarks();

    float percentage = student.calculatePercentage();
    cout << "\nPercentage: " << percentage << "%" << endl;

    return 0;
}
