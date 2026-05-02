#include <iostream>
using namespace std;

template <class T>
T sumArray(T arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter integer elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum = " << sumArray(arr, n) << endl;

    return 0;
}
