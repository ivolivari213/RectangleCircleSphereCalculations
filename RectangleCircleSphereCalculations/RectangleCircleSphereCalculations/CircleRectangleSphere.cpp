#include "CircleRectangleSphere.h"



double Circle::getcircumference() const
{
	return circumference;
}

double Circle::getdiameter() const
{
	return diameter;
}

double Circle::getradius()const
{
	return radius;
}

double Circle::getarea()const
{
	return area;

}

void Circle::radiusDeclaration()
{
	cout << "Enter the radius: ";
	cin >> radius;
}



double Circle::circumferencecalculate()
{
	circumference = 3.14 * diameter;
	return circumference;
}

double Circle::Diametercalculate()
{
	diameter = 2 * radius;
	return diameter;
}

double Circle::areacalculate()
{
	area = (3.14 * (pow(radius, 2)));
	return area;

}

void Rectangle::baseDeclaration()
{
	cout << "Enter the base of the rectangle: ";
	cin >> base;
}

void Rectangle::heightDeclaration()
{
	cout << "Enter the height: ";
	cin >> height;
}

double Rectangle::getbase()const
{
	return base;
}

double Rectangle::getheight()
{
	return height;
}

void Rectangle::areaCalculate()
{
	area = base * height;
}

double Rectangle::getarea() const
{
	return area;
}


double Sphere::getDiameter()const
{
	return Diameter;
}

double Sphere::getCircumference()const
{
	return Circumference;
}

double Sphere::getArea()const
{
	return Area;
}

double Sphere::getVolume()const
{
	return Volume;
}

double Sphere::getRadius()const
{
	return Radius;
}

void Sphere::RadiusDeclaration()
{
	cout << "Enter The Radius: ";
	cin >> Radius;
}

double Sphere::DiameterCalculate()
{
	Diameter = 2 * Radius;
	return Diameter;
}

double Sphere::CircumferenceCalculate()
{
	Circumference = (2 * 3.14 * Radius);
	return Circumference;
}

double Sphere::AreaCalculate()
{
	Area = 4 * (3.14 * (pow(Radius, 2)));
	return Area;
}

double Sphere::VolumeCalculate()
{
	Volume = 1.33 * (3.14 * (pow(Radius, 3)));
	return Volume;
}


