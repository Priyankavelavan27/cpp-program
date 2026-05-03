#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a line (end with #):\n";

    while (true)
    {
        ch = cin.get();
        if (ch == '#')
            break;

        cout.put(ch);
    }

    cout << "\nEnd of Input.\n";
    return 0;
}
//*Enter a line (end with #):
//priyanka is a girl#
//priyanka is a girl
//*End of Input.
