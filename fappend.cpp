#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("sample.txt", ios::app);
    string line;

    cout << "Enter text to append: ";
    getline(cin, line);

    file << line << endl;
    file.close();

    cout << "Data appended successfully.\n";
    return 0;
}
//Enter text to append: priyaka
//Data appended successfully.
