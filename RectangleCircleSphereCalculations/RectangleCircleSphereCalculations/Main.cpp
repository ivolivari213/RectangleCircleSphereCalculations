#include "CircleRectangleSphere.h"
#include<iostream>
using namespace std;
void showmenu();

Circle circle;
Rectangle rectangle;
Sphere sphere;

int main()
{
	showmenu();
	return 0;
}

void showmenu()
{
	int userchoice;
	do
	{

		cout << "Choose an option: " << endl;
		cout << "1. Circle Area: " << endl;
		cout << "2. Rentangle Area: " << endl;
		cout << "3.Sphere Calculation: " << endl;
		cout << "0. Exit." << '\n' << endl;
		cout << "Enter your option: ";
		cin >> userchoice;

		switch (userchoice)
		{

		case 1:
			circle.radiusDeclaration();
			circle.Diametercalculate();
			circle.circumferencecalculate();
			circle.areacalculate();

			cout << "\nThe Radius is: " << circle.getradius() << endl;
			cout << "The Diameter is: " << circle.getdiameter() << endl;
			cout << "The Circumference is: " << circle.getcircumference() << endl;
			cout << "The Area of the Circle is: " << circle.getarea() << '\n' << endl;
			break;

		case 2:

			rectangle.baseDeclaration();
			rectangle.heightDeclaration();
			rectangle.areaCalculate();
			rectangle.getarea();

			cout << "Enter the Base: " << rectangle.getbase();
			cout << "Enter the Height:  " << rectangle.getheight() << endl;
			cout << "Enter the Area: " << rectangle.getarea() << '\n' << endl;

			break;

		case 3:
			sphere.RadiusDeclaration();
			sphere.DiameterCalculate();
			sphere.AreaCalculate();
			sphere.VolumeCalculate();
			sphere.CircumferenceCalculate();
			sphere.getArea();
			sphere.getDiameter();
			sphere.getRadius();
			sphere.getVolume();
			sphere.getCircumference();

			cout << "Radius is: " << sphere.getRadius() << endl;
			cout << "The Diameter is: " << sphere.getDiameter() << endl;
			cout << "The Circumference is: " << sphere.getCircumference() << endl;
			cout << "The Area is: " << sphere.getArea() << endl;
			cout << "The Volume is: " << sphere.getVolume() << '\n' << endl;
			break;

		case 0:
			cout << "Bye..." << endl;
		default:
			break;

		}

	} while (userchoice != 0);
}
