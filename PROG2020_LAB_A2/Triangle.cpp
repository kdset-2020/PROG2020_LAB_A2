#include "Triangle.h"
#include <math.h>

Triangle::Triangle(double newSideOne, double newSideTwo)
{
	SetSideOne(newSideOne);
	SetSideTwo(newSideTwo);
}

Triangle::Triangle(float newAngleOne)
{
	SetAngleOne(newAngleOne);
}

Triangle :: Triangle(float newAngleOne, float newAngleTwo)
{
	SetAngleOne(newAngleOne);
	SetAngleTwo(newAngleTwo);
}

Triangle::~Triangle()
{
	
}

double Triangle::GetSideOne(void)
{
	return sideOne;
}

double Triangle::GetSideTwo(void)
{
	return sideTwo;
}

float Triangle::GetAngleOne(void)
{
	return angleOne;
}
float Triangle::GetAngleTwo(void)
{
	return angleTwo;
}

void Triangle::SetSideOne(double newSideOne)
{
	sideOne = newSideOne;
}
void Triangle::SetSideTwo(double newSideTwo)
{
	sideTwo = newSideTwo;
}

void Triangle::SetAngleOne(float newAngleOne)
{
	angleOne = newAngleOne;
}
void Triangle::SetAngleTwo(float newAngleTwo)
{
	angleTwo = newAngleTwo;
}

void Triangle::Show(void)
{
	printf("\nTriangle Information\n");
	printf("=================\n");
	printf("Side One : %.2lf\n", GetSideOne());
	printf("Side Two : %.2lf\n", GetSideTwo());
}

void Triangle::Hypotenuse(void)
{
	double hypotenuse = 0;
	double sideOne = GetSideOne();
	double sideTwo = GetSideTwo();

	hypotenuse = (sideOne * sideOne) + (sideTwo * sideTwo);
	hypotenuse = sqrt(hypotenuse);

	printf("Your triangle's hypotenuse is: %.2lf\n", hypotenuse);
}

void Triangle::Area(void)
{
	double area = 0;
	double sideOne = GetSideOne();
	double sideTwo = GetSideTwo();

	area = 0.5 * (sideOne * sideTwo);
	

	printf("Your triangle's area is: %.2lf\n", area);
}

void Triangle::MissingAngle(void)
{
	float angle = 0;
	float angleOne = GetAngleOne();
	float angleTwo = GetAngleTwo();

	angle = 180 - angleOne - angleTwo;

	printf("Your triangle's missing angle is: %.2f\n", angle);
}