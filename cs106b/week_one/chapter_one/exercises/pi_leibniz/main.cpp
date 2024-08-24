/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;

long calc(int x);

int main()
{
    int approximation =0 ;
    long result = 0.0;
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
cout << "this program does approximations of pi " << endl;
cout << "Enter number of approximation" << endl;
cin >> approximation;
result = 4 * ( 1 - calc(approximation));
cout << "the apporoximation of pi to " << approximation << " is " << result << endl;

    return 0;
}

long calc(int x)
    {
    x = 3 ;
    long sum = 0.0;

    for(int i = 0 ; i < x ; i++ )
    {
        if(i % 2 == 0 ) { sum += 1/x ;}
        else{sum -= 1/x ; }
        x += 2 ;
    }
    return sum;
    }

