#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename;
    cout << "Enter file name to open: ";
    cin >> filename;

    try
    {
        ifstream fin(filename);

        if(!fin)
            throw "File cannot be opened!";

        cout << "File opened successfully.\n";
        cout << "File content:\n";

        string line;
        while(getline(fin, line))
        {
            cout << line << endl;
        }

        fin.close();
    }
    catch(const char *msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
