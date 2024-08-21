/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */
/*
The German mathematician Leibniz (1646–1716) discovered the rather
remarkable fact that the mathematical constant π can be computed using the
following mathematical relationship:
pi / 4  =  1 – 1/3  + 1/5  –  1/7 +  1/9 –  1/11 + . . .
The formula to the right of the equal sign represents an infinite series; each
fraction represents a term in that series. If you start with 1, subtract one-third,
54 Overview of C++
add one-fifth, and so on, for each of the odd integers, you get a number that
gets closer and closer to the value of π/4 as you go along.
Write a program that calculates an approximation of π consisting of the first
10,000 terms in Leibniz’s series

*/
#include "console.h"
#include "simpio.h"
using namespace std;





int main()
    {
    double sum = 1.0 ;
    int i = -1;
    int x = 3.0 ;
        while( i < 10000 ){
        if (i % 2 ==0)
            {
                sum = sum + (1.0 / x);
            }
        else {
            sum = sum - (1.0 / x);
        }
            x = x + 2.0 ;
        i++;

    }


    double result = 4 * (1.0 - sum);

    cout << result << endl;
    return 0;
    }




