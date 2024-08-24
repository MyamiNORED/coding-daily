/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;


int main()
{
        /*
    In 1979, Douglas Hofstadter, Professor of Cognitive Science at the University
    of Indiana, wrote Gödel, Escher, Bach, which he described as “a metaphorical
    fugue on minds and machines in the spirit of Lewis Carroll.” The book won
    the Pulitzer Prize for Literature and has over the years become one of the
    classics of computer science. Much of its charm comes from the mathematical
    oddities and puzzles it contains, many of which can be expressed in the form of
    computer programs. Of these, one of the most interesting concerns the
    Exercises 53
    sequence of numbers formed by repeatedly executing the following rules for
    some positive integer n:
    • If n is equal to 1, you’ve reached the end of the sequence and can stop.
    • If n is even, divide it by two.
    • If n is odd, multiply it by three and add one.
    Although it also goes by several other names, this sequence is often called the
    hailstone sequence, because the values tend to go up and down, much as
    hailstones do in the clouds in which they for
    */
    int n = 0 ;
    cout << "ENTER N?" << endl;
    cin >> n;
    while(n > 1 )
    {

        if( n % 2 ==0) {
            int result = n / 2 ;
            cout << n << " is even so i divide it by two and get " << result << endl;
            n = result;
        }
        else {
            int result = (n * 3) + 1 ;
            cout << n << " is odd so i multiply by 3 and add 1 and get  " << result << endl;
            n = result;
        }



    }


    return 0;
}
