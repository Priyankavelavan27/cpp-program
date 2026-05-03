#include <iostream>
using namespace std;

int main()
{
    int balance = 5000;
    int withdraw;

    cout << "Current Balance = " << balance << endl;
    cout << "Enter withdraw amount: ";
    cin >> withdraw;

    try
    {
        if (withdraw > balance)
            throw withdraw;

        balance = balance - withdraw;
        cout << "Withdraw successful!" << endl;
        cout << "Remaining Balance = " << balance << endl;
    }
    catch (int w)
    {
        cout << "Exception: Insufficient balance! Withdraw amount = " << w << endl;
    }

    return 0;
}
//Current Balance = 5000
//Enter withdraw amount: 10000
//Exception: Insufficient balance! Withdraw amount = 10000
