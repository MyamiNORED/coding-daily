/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include <math.h>


using namespace std;
float average(float guess,float x);
float sq(float x);


int main()
{
    //A program that calculates square root of x by succevive approximation "
	//let x be the number we to get the square root of
	//first guess that that x/2 , might be the square root
	//so guess = x / 2 . if guess squared is equal to x . tada we got it .
	//now the successive approximations thing
	//create a function a average of type bool that takes two parameters and return the average of two numbers
	//now we a new guess equal to by getting average of old guess and x / old guess 
	//we stop when average is equal to old guess or x/ old guess
    while(true) {
        float x = 0 ;
        cout << "Enter?" << endl;
        cin >> x;
        if(x ==999) {break ;}
        cout << "square root of " <<  x << " is " << sq(x) << endl;

    } //2.0) == 1.4142135623730951



    return 0;
}

float average(float guess,float x){

    return (guess + (x/guess)) / 2 ;
}

float sq(float x){


float guess = x/2;

while (true)
            {

    if(pow(guess,2) == x) {  break;}

    float ave = average(guess,x);
    if((ave == guess ) || (ave == (x/guess))) {  guess = ave ; break ;}
    guess = ave ;
            }
return guess;
}
