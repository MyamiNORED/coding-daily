/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include<math.h>
#include <error.h>
using namespace std;

void windchill(float t,float v ,float &result);


int main()
{
/*	If you have been outside in cold, windy weather, you know that your perception
	of the cold depends on the wind speed as well as the temperature. The faster
	the wind blows, the colder you feel. To quantify the how wind affects
	temperature perception, the National Weather Service reports the wind chill,
	which is illustrated on their website as shown in Figure 2-17.
	As you can see at the bottom of Figure 2-17, the National Weather Service
	calculates wind chill using the formula
    windchill 35.74 + 0.6215 * t – 35.75 * pow(v,0.16) + 0.4275 * t* pow(v,0.16)
	where t is the Fahrenheit temperature and v is the wind speed in miles per hour.
	Write a function windChill that takes the values of t and v and returns the
	wind chill. In doing so, your function should take account of two special cases:
	• If there is no wind, windChill should return the original temperature t.
	• If the temperature is greater than 40° F, the wind chill is undefined, and
	your function should call error with an appropriate message.
	Although it will be easier to write such an application once you learn how to
	format numeric data in Chapter 4, you already know enough to align the
	columns of the wind-chill table as shown in Figure 2-17. If you’re up for a
	challenge, write a main program that uses windChill to produce that table.
	
*/
    float result ;
    for (int i = 0 ; i < 60 ; i= i+5){
    for(int j = 40 ; j > -45 ; j= j - 5){
             windchill(j,i,result) ;
        cout << " " << round(result) << " ";
        }
    cout << "\n";
}


    return 0;
}

void windchill(float t,float v ,float &result)
    {
/* formula= 35.74 + 0.6215 * t – 35.75 * pow(v,0.16) + 0.4275 * t* pow(v,0.16)*/

        if(0 == v) {result = t;}
        else if(t > 40 ){result =0;}
        else{
        result =  (35.74 +(0.6215 * t) - 35.75 * pow(v,0.16) + 0.4275 * t * pow(v,0.16) );
        }

    }
