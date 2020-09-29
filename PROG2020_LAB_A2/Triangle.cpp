#include "Triangle.h"

Triangle::Triangle(double newSideOne, double newSideTwo)
{
	SetSideOne(newSideOne);
	SetSideTwo(newSideTwo);
}

Triangle::~Triangle()
{
	printf("\nThe triangle is broken ...\n");
}

double Triangle::GetSideOne(void)
{
	return sideOne;
}

double Triangle::GetSideTwo(void)
{
	return sideTwo;
}

void Triangle::SetSideOne(double newSideOne)
{
	sideOne = newSideOne;
}
void Triangle::SetSideTwo(double newSideTwo)
{
	sideTwo = newSideTwo;
}

void Triangle::Show(void)
{
	printf("\nTriangle Information\n");
	printf("=================\n");
	printf("Side One : %.2lf\n", GetSideOne());
	printf("Side Two : %.2lf\n", GetSideTwo());
}