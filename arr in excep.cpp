#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index (0 to 4): ";
    cin >> index;

    try
    {
        if (index < 0 || index > 4)
            throw index;

        cout << "Element = " << arr[index] << endl;
    }
    catch (int i)
    {
        cout << "Exception: Index out of range! Index = " << i << endl;
    }

    return 0;
}
