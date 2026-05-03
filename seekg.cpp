#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("sample.txt", ios::in);
    if (!file)
    {
        cout << "File not found!\n";
        return 0;
    }

    cout << "Initial Position: " << file.tellg() << endl;

    file.seekg(5, ios::beg);
    cout << "After seekg(5): " << file.tellg() << endl;

    char ch;
    file.get(ch);
    cout << "Character at position 5: " << ch << endl;

    file.close();
    return 0;
}
/*Initial Position: 0
After seekg(5): 5
Character at position 5: k */
