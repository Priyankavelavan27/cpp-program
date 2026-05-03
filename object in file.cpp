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
    ofstream fout("student.dat", ios::binary);

    s.input();
    fout.write((char *)&s, sizeof(s));

    fout.close();
    cout << "Student record saved.\n";
    return 0;
}
/*Enter Roll No: 59
Enter Name: priyanka
Enter Marks: 92
Student record saved.*/
