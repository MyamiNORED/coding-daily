/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;

/*int main()
	{	
/	Write a program that converts a distance in meters to the corresponding English
	distance in feet and inches. The conversion factors you need are
		1 inch = 0.0254 meters
		1 foot = 12 inches	

    float distance = 0 ;
	float constante_one = 1 / 0.0254 ;

	cout << "enter distance in meters : " << endl;
	cin >> distance;
    float d_in_inches = distance * constante_one;
    float d_in_foot   = d_in_inches  / 12 ;
    cout << "the distance in inches : " << d_in_inches <<  " :wand  in foot : " << d_in_foot << endl ;
	return 0 ;
	}




*/
void get_distance_meter(float &meter);
void calculate(float &meter,float &foot, float &inch );
void show_result(float &foot, float &inch);



int main()
    {
    float inch = 0.0 ;
    float foot = 0.0 ;
    float meter = 0.0 ;
    get_distance_meter(meter);
    calculate(meter,foot,inch );
    show_result(foot ,inch);


    return 0 ;

    }

    void calculate(float &meter,float &foot, float &inch )

    {
        float cons = 1.0 / 0.0254 ;

       inch = meter * cons;
       foot  = inch / 12 ;


    }






    void show_result(float &foot, float &inch)
    {
    cout << "The distance in inches : " << inch << " and feets : " << foot << endl ;

    }


void get_distance_meter(float &meter)
	{

	cout << "Welcome ! Program to convert meter to inches and foot "<< endl;
	cout << "Enter distance in meter ?" << endl;
    cin >> meter;
	}



