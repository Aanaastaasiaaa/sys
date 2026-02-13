#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    fstream f;
    f.open("Z:/fi.txt");
    if (!f)
    {
        cout << ":(";
        exit(-1);
    }
    int k = _getch();
    while (k != 27)
    {
        f.seekg(0,ios::end);
        streamsize s1 = f.tellp();
        streamsize s2 = f.tellp();
        while (s1== s2)
        {
            s1 = s2;
            
            s2=f.tellp();
        }
        cout << "new";
        k = _getch();
    }
}