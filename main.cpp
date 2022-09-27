#include <iostream>
using namespace std;

int main()
{
	int choice;
	double width, height, radius;
	double area;

	cout << "Geometry Calculator\n";
	cout << "\t1. Calculate the Area of Circle\n";
	cout << "\t2. Calculate the Area of Rectangle\n";
	cout << "\t3. Calculate the Area of Triangle\n";
	cout << "\t4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter the radius: ";
		cin >> radius;
		area = 3.14 * radius * radius;
		break;
	case 2:
		cout << "Enter the width and height";
		cin >> width >> height;
		area = width * height;
		break;
	case 3:
		cout << "Enter the width and height";
		cin >> width >> height;
		area = width * height * 0.5;
		break;
	case 4:
		cout << "Program Stopped";
		return 0;
		break;
	default:
		cout << "Wrong Number\n";
		return 0;
	}
	cout << area << endl;
}
