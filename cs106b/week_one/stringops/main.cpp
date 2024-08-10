
/*
#include <iostream>
#include "console.h"
#include "SimpleTest.h"
using namespace std;
void mySwap(int &x ,int &y);
PROVIDED_TEST("basic test of swap() function with two integers")
{
    int a = 53;
    int b = 42;

    mySwap(a, b);

    EXPECT_EQUAL(a, 42);
    EXPECT_EQUAL(b, 53);
}

int main()
{
    runSimpleTests(ALL_TESTS);
    return 0;
}
void mySwap(int &x, int &y) {
    int temp = x;
    x = y;
    y= temp;
}





*/













/*#include <iostream>
#include "console.h"
using namespace std;

int main()
{
    string s = "hello";

    // UH OH! Accessing invalid index! Who knows what will happen?
    cout << s[1000000000000000000000000000000] << endl;

    return 0;
}
*/




















/*#include <iostream>
#include "console.h"
using namespace std;

int main()
{
    string s = "hello";

    // UH OH! Accessing invalid index! Who knows what will happen?
    cout << s[10] << endl;

    return 0;
}

*/
























/*#include <iostream>
#include "console.h"
    using namespace std;

int main()
{
    //  BAD!  Before we do the "=" operation, we resolve the right-hand side of that
    // operator. That involves trying to apply the "+" operator to two string literals,
    // which are C-style strings. C++ will not even allow this to compile.
    //string s1 = "abc" + "xyz";

    //  OKAY.  We can assign C-style strings directly to C++ string variables.
    string s2 = "abc";
    string s3 = "xyz";

    //  OKAY.  Both s2 and s3 are C++ style strings. We can apply the "+" operator
    // to two C++ strings to concatenate them.
    string s4 = s2 + s3;
    cout << s4 << endl;

    //  OKAY.  This works, too! The right-hand side of the "=" operator gets resolved
    // first, and since s5 + "hello" involves at least one C++ style string, the
    // operation is good to go.
    string s5 = "hello";
    string s6 = s5 + " there";
    cout << s6 << endl;

    //  OKAY.  Same as above, but with (C + C++) instead of (C++ + C).
    string s7 = " there";
    string s8 = "hello" + s7;
    cout << s8 << endl;

    //  OKAY.  There is a function called string() that we can use to create a C++
    // style string out of a C-style string. As long as we apply it to at least one of
    // the C-style strings below, we end up with at least one C++ style string, and we
    // are then in the clear to use the concatenation operator.
    string s9 = "hello" + string(" there");
    cout << s9 << endl;

    //  OKAY.  Similarly, C++ allows us to typecast a C-style string to a C++ string.
    string s10 = "hello" + (string)" there";
    cout << s10 << endl;

    return 0;
}

*/






















/*#include <iostream>
#include "console.h"
using namespace std;

int main() {

    string s = "Reaver SparkX OOO";
    string n = "";
    for(int i = 0 ; i < s.length() ; i++){

        if(s[i] >= 'A' && s[i] <= 'Z'){

            n += s[i];
        }


    }

    cout << n << endl;






    return 0 ;
}




*/
























/*#include <cctype>
#include <iostream>
#include "console.h"
using namespace std;

int main()
{
    string s1 = "yellow";
    string s2 = "$assy";

    // Should print "yes" because s1[0] ('y') is an alphabetic character.
    if (isalpha(s1[0]))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    // Should print "no" because s2[0] ('$') is not an alphabetic character.
    if (isalpha(s2[0]))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}




*/



































/*// looping trough a string

#include<iostream>
#include"console.h"
using namespace std;


int main () {
    string s = "hello there ";
    //looping through using for loop
   for (int i = 0 ; i < s.length() ;i++){


        cout << i << "   :  " << s[i] <<endl;
    }

// using for each loop

// range based loop

    for( char ch : s){
        cout << ch <<endl ;
    }









    return 0 ;
}








*/





















/* #include "console.h"
using namespace std;

int main()
{
    string s = "hello";
    cout << s << endl;

    // This changes the character at index 0. I read "s[0]" out loud as "s-sub-zero."
    s[0] = 'J';
    cout << s << endl;

    // We can concatenate a single character to a string using the + operator. We know
    // the w below is just a character (not a string) because it's in single quotes.
    s [4]= 'y';
    cout << s << endl;

    // We can also concatenate an entire string.
    s += " squashes";
    cout << s << endl;

    return 0;
}

*/








































/*#include <iostream>
#include "console.h"
#include "strlib.h"
using namespace std;

int main()
{


    // Notice that we are not passing s to a length function. Rather, we use the dot
    // operator on the s variable to call a length() function that is packed up with
    // the string and which gives us the length of that string (11, as there are 11
    // characters in "hello there"). (The space counts a character.)

    //cout << s.length() << endl;
    //cout << s.append(" test") << endl;
    // cout << s.compare("elephanu") << endl ;
     //cout << s.find("xu");
    string s = "hello there";
    s = toUpperCase(s);
    cout << s << endl;


    return 0;
}
*/
