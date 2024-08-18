/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */
#include <iostream>
#include "console.h"
#include "simpio.h"
using namespace std;
// A poorly designed version of a program to compute
// a user's body mass index (BMI).
void person(int num);
void readWeight(int num, double height);
void reportStatus(int num, double height, double weight);
int main() {
    cout << "This program reads data for two" << endl;
    cout << "people and computes their body" << endl;
    cout << "mass index and weight status." << endl;
    cout << endl;
    person(1);
    return 0;
}
// process one person
void person(int num) {
    cout << "Enter person #" << num << "'s information:" << endl;
    double height = getReal("height (in inches)? ");
    readWeight(num, height);
}
// read person's weight in pounds
void readWeight(int num, double height) {
    double weight;
    weight = getReal("weight (in pounds)? ");
    reportStatus(num, height, weight);
}
// tell if the person is under/overweight
void reportStatus(int num, double height, double weight) {
    double bmi = weight / (height * height) * 703;
    cout << "body mass index = " << bmi << endl;
    if (bmi < 18.5) {
        cout << "underweight" << endl;
    } else if (bmi < 25) {
        cout << "normal" << endl;
    } else if (bmi < 30) {
        cout << "overweight" << endl;
    } else {
        cout << "obese" << endl;
    }
    if (num == 1) {
        person(2); // handle second person
    }
}
