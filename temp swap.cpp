#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before Swap: a=" << a << " b=" << b << endl;
    swapValues(a, b);
    cout << "After Swap: a=" << a << " b=" << b << endl;

    float x = 5.5, y = 8.8;
    cout << "\nBefore Swap: x=" << x << " y=" << y << endl;
    swapValues(x, y);
    cout << "After Swap: x=" << x << " y=" << y << endl;

    return 0;
}
/*Before Swap: a=10 b=20
After Swap: a=20 b=10

Before Swap: x=5.5 y=8.8
After Swap: x=8.8 y=5.5
*/
