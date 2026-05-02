#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("sample.txt");

    if(!fin)
    {
        cout << "File not found!\n";
        return 0;
    }

    char ch;
    int characters = 0, words = 0, lines = 0;

    while(fin.get(ch))
    {
        characters++;

        if(ch == ' ' || ch == '\n')
            words++;

        if(ch == '\n')
            lines++;
    }

    fin.close();

    cout << "Characters = " << characters << endl;
    cout << "Words = " << words << endl;
    cout << "Lines = " << lines << endl;

    return 0;
}
