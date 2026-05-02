#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    try
    {
        if (age < 18)
            throw age;

        cout << "Eligible to vote!" << endl;
    }
    catch (int a)
    {
        cout << "Exception: Not eligible to vote. Age = " << a << endl;
    }

    return 0;
}
