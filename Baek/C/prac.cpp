#include <iostream>
#include <vector>
#include <cmath>

#define INF 99999999
using namespace std;


float square(float x)
{
	return x*x;
}

float convertToCelsius(float fahrenheit)
{
	
	 float Celsius = (fahrenheit - 32) * 5 / 9;


	return Celsius;
}

double calculateUniversalForce(double m1, double m2, double r, double G = 6.674E-11) 
{

 double UniversalForce = G*m1*m2 / square(r);


 return UniversalForce;
}

float calculateEuclideanDistance(float x1, float y1, float x2, float y2)
{
	float EuclideanDistance = sqrt(square(x1 - x2) + square(y1 - y2));


	return EuclideanDistance;
}


int main(void) 
{
	float x = calculateEuclideanDistance(1, 2, 3, 4);
	printf("SSS");
	cout << "X" << x;
}