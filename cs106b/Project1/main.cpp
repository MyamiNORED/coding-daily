#include <iostream>
#include "console.h"
using namespace std;

int main()
{
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        // typecast!
        cout << ch << " (" << int(ch) << ")" << endl;
    }

    return 0;
}
