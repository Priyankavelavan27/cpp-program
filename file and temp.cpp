#include <iostream>
#include <fstream>
using namespace std;

template <class T>
void writeToFile(T arr[], int n, string filename)
{
    ofstream fout(filename);

    if(!fout)
        throw "Unable to create file!";

    for(int i = 0; i < n; i++)
        fout << arr[i] << endl;

    fout.close();
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    try
    {
        writeToFile(arr, n, "numbers.txt");
        cout << "Numbers written to file successfully.\n";
    }
    catch(const char *msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
//Enter number of elements: 3
//Enter elements:
//1 2
//6
//Numbers written to file successfully.
