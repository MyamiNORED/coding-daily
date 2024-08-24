/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;


/*
 If you did not do so the first time around, rewrite the Celsius-to-Fahrenheit
program from exercise 1 in Chapter 1 so that it uses a function to perform the
conversion.
*/
float fah_to_celsius(float celsi);



int main()
{
    while (true)
    {
        float cel;
        cout << "Enter temperature in Celsius" << endl;
        cout << "enter 0 to quit" << endl;
        cin >> cel ;
        if (cel == 0) {break;}
        cout << "Temperature in celcius is : " <<  cel << " is in fahrenheit : " << fah_to_celsius(cel)<< endl;

    }
    cout << "Program Ended" << endl;
    return 0 ;
}
float fah_to_celsius(float celsi)

{
    /*"A function to convert from celsius to fahrenheit"*/
        return (9.0/5.0) * celsi + 32.0 ;
}
