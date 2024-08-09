#include <iostream>
#include "console.h"
using namespace std;

int main()
{
    string s = "elephant";

    // Notice that we are not passing s to a length function. Rather, we use the dot
    // operator on the s variable to call a length() function that is packed up with
    // the string and which gives us the length of that string (11, as there are 11
    // characters in "hello there"). (The space counts a character.)

    //cout << s.length() << endl;
    //cout << s.append(" test") << endl;
    // cout << s.compare("elephanu") << endl ;
     cout << s.find("xu");



    return 0;
}
