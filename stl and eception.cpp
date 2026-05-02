#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    try
    {
        cout << "Element at index 2: " << v.at(2) << endl;
        cout << "Element at index 5: " << v.at(5) << endl;
    }
    catch (out_of_range &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
