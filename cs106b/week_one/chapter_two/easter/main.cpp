/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;
int remainder(int year , int n) ;

int main()
{
/*	Gauss's algorithm for computing the date of Easter
        	 I. Divide the number of the year for which one wishes to calculate
          		Easter by 19, by 4, and by 7, and call the remainders of these divisions a, b, and c, respectively.
        		If the division is even, set the remainder to (0; the quotients are not taken into account. 
			Precisely the same is true of the following divisions.
		II. Divide the value 19a + 23 by 30 and call the remainder d.
		III. Finally, divide 2b + 4c + 6d + 3 or 2b + 4c + 6d + 4
			choosing the former for years between 1700 and 1799 
			and the latter for years between 1800 and 1899, by 7 and call the remainder e.
			Then Easter falls on March 22 + d + e or when d + e is greater than 9, on April d+e-9.
*/  

		

	int a = 0 ; int b  = 0 ; int c = 0 ; int d = 0 ; int year = 0 ;int e = 0 ;
    while(true) {
        cout << "---------Easter Calculator------------" << endl;
        cout << "enter year :" << endl ;
        cin >> year ;
        if(year ==0) { break;}
	a = remainder(year,19);
	b = remainder(year,4);
	c = remainder(year,7);
	d =  ((19 * a ) + 23) % 30  ;
	e = ( ( 2 * b ) + ( 4 * c ) + (6 * d) + 3) % 7 ;
    cout << "a:" << a <<endl;
    cout << "b:" << b <<endl;
    cout << "c:" << c<<endl;

    cout << "d:" << d <<endl;
    cout << "e:" << e <<endl;



    if(d + e >9 ) {cout << "april " << d+e-9 << endl;}
        else{cout << "march " << 22 + d + e << endl;}


    cout << "\n" << endl;
    }

  return 0;




}

int remainder(int year , int n){
     int r = year % n ;
    return r;
}




















 
