#include<iostream>
#include<cstring>
using namespace std;

class Circle
{
public:
	double getradius() const;
	double getdiameter() const;
	double getcircumference()const;

	double getarea() const;

	void radiusDeclaration();
	double circumferencecalculate();
	double Diametercalculate();
	double areacalculate();


private:

	double circumference, diameter, radius, area;

};


class Rectangle
{
public:
	void baseDeclaration();
	void heightDeclaration();
	double getbase() const;
	double getheight();
	void areaCalculate();
	double getarea()const;

private:
	double base, height, area;
};

class Sphere
{
public:
	double getDiameter() const;
	double getCircumference()const;
	double getArea()const;
	double getVolume()const;
	double getRadius()const;
	double DiameterCalculate();
	double CircumferenceCalculate();
	double AreaCalculate();
	double VolumeCalculate();

	void RadiusDeclaration();

private:
	double Diameter, Circumference, Area, Volume, Radius;

};
