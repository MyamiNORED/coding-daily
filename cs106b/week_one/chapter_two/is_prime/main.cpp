/*
 *
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */
/*

An integer greater than 1 is said to be prime if it has no divisors other than
itself and one. The number 17, for example, is prime, because there are no
numbers other than 1 and 17 that divide evenly into it. The number 91,
however, is not prime because it is divisible by 7 and 13. Write a predicate
method isPrime(n) that returns true if the integer n is prime, and false
otherwise. To test your algorithm, write a main program that lists the prime
numbers between 1 and 100.

*/
#include "console.h"
#include "simpio.h"
using namespace std;
bool is_prime(int n);

int main()
{
    int all = 1 ;
    for(int i = 3 ; i < 1000 ; i++){
        if(is_prime(i)){all += 1;cout << "found one " << i << endl;}
    }
    cout << "number of primes is : "  << all << endl;
    return 0;
}


bool is_prime(int n)
    {
    for(int i = 2 ; i < n ; i++){
            if(n % i == 0) {return false;}
        }
    return true;
    }
