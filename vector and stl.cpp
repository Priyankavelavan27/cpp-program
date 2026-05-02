#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "\nVector Elements:\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\n\nFirst Element: " << v.front();
    cout << "\nLast Element: " << v.back();

    cout << "\n\nAfter Pop_back:\n";
    v.pop_back();
    for (int val : v)
        cout << val << " ";

    return 0;
}
