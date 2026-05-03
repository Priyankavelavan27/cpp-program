#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;

        if (b == 0)
            cout << "Division not possible (Divide by Zero)" << endl;
        else
            cout << "Division: " << a / b << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    Calculator<int> c1(x, y);
    c1.display();

    float p, q;
    cout << "\nEnter two float values: ";
    cin >> p >> q;

    Calculator<float> c2(p, q);
    c2.display();

    return 0;
}
/*Enter two integers: 2 3
Addition: 5
Subtraction: -1
Multiplication: 6
Division: 0
*/
