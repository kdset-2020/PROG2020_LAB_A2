#include <string.h>
#include <stdio.h>

#pragma warning (disable: 4996)

#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__


class Triangle
{
private:

	double sideOne;
	double sideTwo;

public:

	double GetSideOne(void);
	double GetSideTwo(void);

	void SetSideOne(double newSideOne);
	void SetSideTwo(double newSideTwo);

	Triangle(double newSideOne, double newSideTwo);
	~Triangle();

	void Show(void);

};

#endif