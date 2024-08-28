/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;


int permutations(int n, int k );

int main()
{
   /* Write a function permutations(n, k) that computes the P(n, k) function
        without calling the fact function. Part of your job in this problem is to figure
            out how to compute this value efficiently. To do so, you will probably find it
            useful to play around with some relatively small values to get a sense of how
                the factorials in the numerator and denominator of the formula behave.

    */
    int n = 0 ; int k = 0;int p = 0;
    while(true){

    cout << "calculate number of permutation  of n  in  k" << endl;
    cout << " enter n: " << endl;
    cin >> n;
    if(n == 0 ){break ;}
    cout<< "enter number of permuations k to calcuate in n : " << endl ;
    cin >> k;

    p = permutations(n , k);
    cout << "number of permutations " << k << " in " << n <<  " is " << p << endl;
   }
    cout << "end" << endl;

    return 0;
}
int permutations(int n, int k )

{   int interval = n - k ;
    int result = 1 ;
    for (int i = interval + 1;i <= n ; i++){
        result *= i;
    }

    return result;
}
