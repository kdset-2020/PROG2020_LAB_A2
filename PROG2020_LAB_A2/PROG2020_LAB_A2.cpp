// PROG2020_LAB_A2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include"Triangle.h"


int main()
{

    // unit test 1
    // ------------
    double testSideOne = 0;
    double testSideTwo = 0;
    
    std :: cout << "Please enter the Triangle's first side: ";
    std:: cin >> testSideOne;
    std:: cout << "Please enter the Triangle's second side: ";
    std:: cin >> testSideTwo;

    Triangle testTriangle(testSideOne, testSideTwo);
    testTriangle.Show();

}
