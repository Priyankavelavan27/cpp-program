#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("sample.txt");
    string data;

    cout << "Enter text (type END to stop):\n";

    while (true)
    {
        getline(cin, data);
        if (data == "END")
            break;
        fout << data << endl;
    }

    fout.close();
    cout << "Data written to file successfully.\n";

    return 0;
}
/*Enter text (type END to stop):
prianka is end*/


