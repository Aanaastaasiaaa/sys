#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    ifstream f;
    f.open("Z:/fi.txt", ios::ate| ios::binary);
    if (!f)
    {
        cout << ":(";
        exit(-1);
    }
    streamsize last = f.tellg();
    f.close();
    int k = _getch();
    while (k != 27)
    {
        ifstream f("Z:/fi.txt", ios::ate | ios::binary);
        streamsize now = f.tellg();
        f.close();
        if (last!= now)
        {
            cout << "new";
            last = now;
        }
    }
}
