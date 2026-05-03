#include <iostream>
using namespace std;

template <class T>
T divide(T a, T b)
{
    if (b == 0)
        throw "Division by Zero Error!";
    return a / b;
}

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try
    {
        cout << "Result = " << divide(a, b) << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
/*Enter two integers: 2 3
Result = 0
*/
