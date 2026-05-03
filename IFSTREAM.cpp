#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("sample.txt");
    string line;

    if (!fin)
    {
        cout << "File not found!\n";
        return 0;
    }

    cout << "File contents:\n";
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();
    return 0;
}
//output:
//File contents:
//priyanka is END

//priyanka is a bad girl
