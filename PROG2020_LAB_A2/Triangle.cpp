#include "Triangle.h"

Triangle::Triangle(double newSideOne, double newSideTwo)
{
	SetSideOne(newSideOne);
	SetSideTwo(newSideTwo);
}

Triangle::Triangle(double newAngleOne)
{
	SetAngleOne(newAngleOne);
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

double Triangle::GetAngleOne(void)
{
	return angleOne;
}

void Triangle::SetSideOne(double newSideOne)
{
	sideOne = newSideOne;
}
void Triangle::SetSideTwo(double newSideTwo)
{
	sideTwo = newSideTwo;
}

void Triangle::SetAngleOne(double newAngleOne)
{
	angleOne = newAngleOne;
}

void Triangle::Show(void)
{
	printf("\nTriangle Information\n");
	printf("=================\n");
	printf("Side One : %.2lf\n", GetSideOne());
	printf("Side Two : %.2lf\n", GetSideTwo());
}