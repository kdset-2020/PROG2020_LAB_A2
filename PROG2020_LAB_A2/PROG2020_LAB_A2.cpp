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
	float testAngleOne = 0;

	cout << "Please enter the Triangle's angle: ";
	cin >> testAngleOne;
	Triangle angleTriangle(testAngleOne);
	cout << "Your angle is: " << angleTriangle.GetAngleOne() << endl;

	cout << endl << endl;

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

	cout << endl << endl;

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

	cout << endl << endl;
	
	// unit test 5
	// ------------
	cout << "Unit Test: 5" << endl;
	cout << "------------" << endl;
	float testAngleTwo = 0;

	cout << "Please enter the Triangle's first angle: ";
	cin >> testAngleOne;
	cout << "Please enter the Triangle's second angle: ";
	cin >> testAngleTwo;

	Triangle twoAngleTriangle(testAngleOne, testAngleTwo);
	cout << "Your first angle is: " << twoAngleTriangle.GetAngleOne() << endl << "Your second angle is: " << twoAngleTriangle.GetAngleTwo();

	cout << endl << endl;

	// unit test 6
	// ------------
	cout << "Unit Test: 6" << endl;
	cout << "------------" << endl;

	cout << "Please enter the Triangle's first angle: ";
	cin >> testAngleOne;
	cout << "Please enter the Triangle's second angle: ";
	cin >> testAngleTwo;
	Triangle thirdAngleTriangle(testAngleOne, testAngleTwo);
	thirdAngleTriangle.MissingAngle();

	cout << endl << endl;
	//
}
