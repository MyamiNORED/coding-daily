/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */
#include<iostream>
#include "console.h"
#include "simpio.h"
using namespace std;

float calculate_bmi(float height, float weight) ;
string  classify_bmi(float bmi);
float diffe(float bmi1 , float bmi2);


int main()

    {
    float h1 = 0 , w1 = 0 , h2 = 0 , w2 ,bmi1 = 0 ,bmi2 = 0 ;
    cout << "This program reads data for two people"    << endl;
    cout << "and computes their body mass index (BMI)." << endl ;
    cout << "Enter Person 1's information:" << endl;
    cout << "height (in inches)?" << endl;
    cin >> h1 ;
    cout << "weight (in pounds)?" << endl;
    cin >> w1;
    bmi1 = calculate_bmi(h1,w1);
    cout <<  "BMI = " << bmi1 <<" , " << classify_bmi(bmi1) << endl;


    cout << "Enter Person 2's information:" << endl;
    cout << "height (in inches)?" << endl;
    cin >> h2 ;
    cout << "weight (in pounds)?" << endl;
    cin >> w2;
    bmi2 = calculate_bmi(h2,w2);
    cout <<  "BMI = " << bmi2 <<" , " << classify_bmi(bmi2) << endl;


    cout << " " <<endl;
    cout << "BMI difference = " << diffe(bmi1,bmi2);







    return 0 ;
    }

float calculate_bmi(float height, float weight)
    {

    float bmi = (weight * 703) / (height * height );
        return bmi;

    }

string  classify_bmi(float bmi)
    {
    if (bmi < 18.5)	{return "class 1";}
    else if (bmi >=18.5 && bmi <=24.9)	{return "class 2";}
    else if (bmi >= 25.0 && bmi <=29.9)	{return "class 3";}
    else   {return "class 4";}
     }

float diffe(float bmi1 , float bmi2)
    {
    float result = bmi1 - bmi2;
        return result;
    }








