#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("sample.txt");
    ofstream fout("copy.txt");
    char ch;

    if (!fin)
    {
        cout << "Source file not found!\n";
        return 0;
    }

    while (fin.get(ch))
    {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout << "File copied successfully.\n";
    return 0;
}
