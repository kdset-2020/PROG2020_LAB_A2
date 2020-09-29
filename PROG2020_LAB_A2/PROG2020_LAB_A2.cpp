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
	cout << "Unit Test: 1" << endl;
	cout << "------------" << endl;
	double testSideOne = 0;
	double testSideTwo = 0;

	cout << "Please enter the Triangle's first side: ";
	cin >> testSideOne;
	cout << "Please enter the Triangle's second side: ";
	cin >> testSideTwo;

	Triangle testTriangle(testSideOne, testSideTwo);
	testTriangle.Show();

	cout << endl;
	cout << endl;

	// unit test 2
	// ------------
	cout << "Unit Test: 2" << endl;
	cout << "------------" << endl;
	double testAngleOne = 0;

	cout << "Please enter the Triangle's angle: ";
	cin >> testAngleOne;
	Triangle angleTriangle(testAngleOne);
	cout << "Your angle is: " << angleTriangle.GetAngleOne() << endl;

	// unit test 3
	// ------------
	cout << "Please enter the Triangle's first side: ";
	cin >> testSideOne;
	cout << "Please enter the Triangle's second side: ";
	cin >> testSideTwo;

	Triangle hypTriangle(testSideOne, testSideTwo);
	hypTriangle.Hypotenuse();

    // unit test 3
    // ------------
    cout << "Unit Test: 3" << endl;
    cout << "------------" << endl;
    cout << "Please enter the Triangle's first side: ";
    cin >> testSideOne;
    cout << "Please enter the Triangle's second side: ";
    cin >> testSideTwo;


    Triangle hypTriangle(testSideOne, testSideTwo);
    hypTriangle.Hypotenuse();


	// unit test 4
	// ------------
	cout << "Unit Test: 4" << endl;
	cout << "------------" << endl;
	cout << "Please enter the Triangle's first side: ";
	cin >> testSideOne;
	cout << "Please enter the Triangle's second side: ";
	cin >> testSideTwo;

	Triangle areaTriangle(testSideOne, testSideTwo);
	areaTriangle.Area();
}
