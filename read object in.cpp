#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    int roll;
    char name[30];
    float marks;

    void display()
    {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }
};

int main()
{
    Student s;
    ifstream fin("student.dat", ios::binary);

    if (!fin)
    {
        cout << "File not found!\n";
        return 0;
    }

    fin.read((char *)&s, sizeof(s));

    cout << "Roll\tName\tMarks\n";
    s.display();

    fin.close();
    return 0;
}
/*Roll    Name    Marks
59      priyanka        92*/
