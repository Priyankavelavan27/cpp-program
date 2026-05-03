#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if (num < 0)
            throw num;

        cout << "Square Root = " << sqrt(num) << endl;
    }
    catch (int n)
    {
        cout << "Exception: Cannot find square root of negative number! (" << n << ")" << endl;
    }

    return 0;
}
/*Enter a number: 43
Square Root = 6.55744*/
