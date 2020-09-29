#include <string.h>
#include <stdio.h>
using namespace std;

#pragma warning (disable: 4996)

#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__


class Triangle
{
private:

	double sideOne;
	double sideTwo;

	double angleOne;
	double angleTwo;

public:

	double GetSideOne(void);
	double GetSideTwo(void);

	double GetAngleOne(void);
	double GetAngleTwo(void);

	void SetSideOne(double newSideOne);
	void SetSideTwo(double newSideTwo);

	void SetAngleOne(double newAngleOne);
	void SetAngleTwo(double newAngleTwo);

	Triangle(double newSideOne, double newSideTwo);
	Triangle(double newAngleOne);
	~Triangle();

	void Show(void);

	void Hypotenuse(void);

	void Area(void);

};

#endif