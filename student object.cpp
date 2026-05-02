#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    int roll;
    char name[30];
    float marks;

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }
};

int main()
{
    Student s;
    int n;

    ofstream fout("students.dat", ios::binary);

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        s.input();
        fout.write((char *)&s, sizeof(s));
    }

    fout.close();
    cout << "All records saved.\n";
    return 0;
}
