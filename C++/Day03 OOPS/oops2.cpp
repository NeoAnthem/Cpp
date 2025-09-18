/*
2. Create a class student with rollNo, name, gender, age, and array of marks of size 5
    create 2 student object display their info and marks and display sum and average marks
*/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string gender;
    int age;
    int marks[5];
};

int main()
{
    int i;
    int sum;
    float avg;

    Student s1;
    s1.rollNo = 1;
    s1.name = "ABC";
    s1.gender = "Male";
    s1.age = 18;

    cout << "Enter marks for Student " << s1.name << ":\n";
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the marks of subject " << (i + 1) << ": ";
        cin >> s1.marks[i];
        sum += s1.marks[i];
    }
    avg = sum / 5.0;

    Student s2;
    s2.rollNo = 2;
    s2.name = "XYZ";
    s2.gender = "Female";
    s2.age = 18;

    cout << "Enter marks for Student " << s2.name << " :\n";
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the marks of subject " << (i + 1) << " : ";
        cin >> s2.marks[i];
        sum += s2.marks[i];
    }
    avg = sum / 5.0;

    cout << "\nStudent Info:\n";
    cout << "Roll No: " << s1.rollNo << "\n";
    cout << "Name: " << s1.name << "\n";
    cout << "Gender: " << s1.gender << "\n";
    cout << "Age: " << s1.age << "\n";
    for (i = 0; i < 5; i++)
        cout << "Marks of Subject " << (i + 1) << " : " << s1.marks[i] << "\n";
    cout << "Sum = " << sum << ", Average = " << avg << "\n\n";

    cout << "\nStudent Info :\n";
    cout << "Roll No: " << s2.rollNo << "\n";
    cout << "Name: " << s2.name << "\n";
    cout << "Gender: " << s2.gender << "\n";
    cout << "Age: " << s2.age << "\n";
    for (i = 0; i < 5; i++)
        cout << "Marks of Subject " << (i + 1) << " : " << s2.marks[i] << "\n";
    cout << "Sum = " << sum << ", Average = " << avg << "\n";
}
