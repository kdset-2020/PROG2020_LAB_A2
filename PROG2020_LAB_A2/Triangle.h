#include <string.h>
#include <stdio.h>
using namespace std;

#pragma warning (disable: 4996)

#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

// Pushing Test
class Triangle
{
private:

	double sideOne;
	double sideTwo;

	float angleOne;
	float angleTwo;

public:

	double GetSideOne(void);
	double GetSideTwo(void);

	float GetAngleOne(void);
	float GetAngleTwo(void);

	void SetSideOne(double newSideOne);
	void SetSideTwo(double newSideTwo);

	void SetAngleOne(float newAngleOne);
	void SetAngleTwo(float newAngleTwo);

	Triangle(double newSideOne, double newSideTwo);
	Triangle(float newAngleOne);
	Triangle(float newAngleOne, float newAngleTwo);
	~Triangle();

	void Show(void);

	void Hypotenuse(void);

	void Area(void);

	void MissingAngle(void);

};

#endif