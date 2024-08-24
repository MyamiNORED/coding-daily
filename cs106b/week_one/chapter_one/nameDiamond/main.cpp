/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */
#include<iostream>
#include "console.h"
#include "simpio.h"
using namespace std;

void nameDiamond(string s){
    string p ="" ;
    string r = "";
    for (int i = 0 ; i < s.length(); i++){
        p += s[i];
             cout << p << endl;
    }
    for (int i = 0 ; i < s.length(); i++){
        r += s[i+1];
        cout << r << endl;
    }
}


int main()
{

       /* Write a function named  that accepts a string as a parameter and
            prints it in a "diamond" format as shown below.
        For example, the call of  nameDiamond("MARTY")  should print:

                                M
                                 MA
                                  MAR
                                   MART
                                    MARTY
                                     ARTY
                                       RTY
                                         TY
                                          Y
*/
    string s = "MARTY";
    nameDiamond(s);



    return 0;
}
