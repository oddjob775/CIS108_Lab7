/*
create functions using pre-existing code
	beat head against desk for week 3 of spring break, lamenting that i should've been doing this from the start of COVID :\
		come up with witty acronym because reasons...
			use combination of book, youtube, friends, classmates to remember how to code

	draw a box using ascii
		use existing code to split up into functions to demonstrate knowledge of compilers ability to call back from main to function

	use menus to calculate things
		copy pasta from previous code but broken into functions that will hopefully still work even though my brain isn't

				delete everything after assignment was due 4 weeks ago and give up
					start over, trying to watch YouTube and use Code Academy to fill in possible gaps
						rewrite code only to encounter more errors...
							submit what i have because something is better than nothing i suppose...
								pray to God Almighty that I can return to class and have a fighting chance of finishing this semester and not have to repeat it...

do chapter 10, succeed with the help of friend who gave some pointers on how I was overthinking my code

resubmit
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const double
pi = 3.14159;

int
width,
height,
rtl_a,
rtl_b,
rect_h,
rect_w;

double
circ_r,
cyl_r,
cyl_h,
sph_r;

int RECTANGLE(int a, int b)
{
	const int
		rect_a = rect_h * rect_w;

	cout << "\n\nThe area of your rectangle is:\t" << rect_a << "\n";
	return 0;
}

double CIRCLE(double a)
{
	const double
		circ_a = (pi * pow(circ_r, 2));

	cout << "\nThe area of your circle is:\t" << circ_a << "\n";

	return 0;
}

int RIGHT_TRIANGLE(int c, int d)

{
	const int
		rt_a = ((rtl_a * rtl_b) / 2);

	cout << "\nThe area of your Right Triangle is:\t" << rt_a << "\n";

	return 0;
}

double CYLINDER(double b, double c)
{
	const double
		cyl_v = (pi * (pow(cyl_r, 2) * cyl_h));

	cout << "\n\nThe volume of your cylinder is:\t" << cyl_v << "\n";

	return 0;
}

double SPHERE(double d)
{
	const double
		sph_v = ((1.33333) * pi * pow(sph_r, 3));

	cout << "\nThe volume of your sphere is:\t" << sph_v << "\n";

	return 0;
}

int BOX(int i, int j)
{
	int
		c,
		r,
		row = i,
		column = j;

	cout << "\n\n";
	cout << char(218);

	for (r = 0; r <= (row * 2.5); r++)
	{
		cout << char(196);
	}
	cout << char(191) << endl;

	for (c = 0; c <= column; c++)
	{
		cout << char(179);

		for (r = 0; r <= (row * 2.5); r++)
		{
			cout << " ";
		}

		cout << char(179);

		cout << endl;
	}
	cout << char(192);

	for (r = 0; r <= (row * 2.5); r++)
	{
		cout << char(196);
	}
	cout << char(217) << endl;

	return 0;
}

int
main_menu_choice,
area_menu_choice,
volume_menu_choice;




int main()
{
	cout << "*******************************************************************";
	cout << "\n" << char(186) << char(186) << " Welcome to the Repository for Calculations and Transcription  " << char(186) << char(186) << endl;
	cout << "*******************************************************************" << "\n" << char(186);
	cout << char(186) << right << setw(40) << "1) Calculate Area" << setw(24) << char(186) << char(186) << "\n" << char(186);
	cout << char(186) << right << setw(42) << "2) Calculate Volume" << setw(22) << char(186) << char(186) << "\n" << char(186);
	cout << char(186) << right << setw(36) << "3) Draw a Box" << setw(28) << char(186) << char(186) << "\n";
	cout << "*******************************************************************" << "\n";
	cout << char(186) << char(186) << setw(46) << right << "What would you like to do?" << setw(18) << char(186) << char(186) << "\n";
	cout << "*******************************************************************" << "\n";

	cin >> main_menu_choice;

	switch (main_menu_choice)
	{
	case 1:
	{
		cout << "\nOpening Area Calculator Menu...\n\n";
		cout << setw(60) << right << "-----Area Menu-----\n\n\n" << setw(50);
		cout << setw(53) << right << "1) Rectangle\n" << setw(60);
		cout << setw(50) << right << "2) Circle\n" << setw(60);
		cout << setw(60) << right << "3) Right Triangle\n\n\n" << setw(60);
		cout << "\n\nWhat would you like to find the area of?\t\n";
		cin >> area_menu_choice;

		switch (area_menu_choice)
		{
		case 1:
		{
			cout << "\nWhat's the height of your rectangle?\t";
			cin >> rect_h;
			cout << "\nWhat's the width of your rectangle?\t";
			cin >> rect_w;

			RECTANGLE(rect_h, rect_w);
		}
		break;

		case 2:
		{
			cout << "\nWhat's the radius of your circle?\t";
			cin >> circ_r;
			CIRCLE(circ_r);
		}
		break;

		case 3:

		{
			cout << "\nWhat's the length of leg A?:\t";
			cin >> rtl_a;
			cout << "\nWhat's the length of leg B?:\t";
			cin >> rtl_b;

			RIGHT_TRIANGLE(rtl_a, rtl_b);
		}
		break;

		default:
		{
			cout << "Invalid Choice Given" << endl; }
		break;
		}
		break;
	}

	case 2:
	{
		cout << "\nOpening Volume Calculator Menu\n\n\n";
		cout << setw(64) << right << "-----Volume Menu-----\n\n\n" << setw(50);
		cout << setw(56) << right << "1) Cylinder\n" << setw(60);
		cout << setw(54) << right << "2) Sphere\n" << setw(60);
		cout << "\n\nWhat would you like to find the volume of?\t";
		cin >> volume_menu_choice;

		switch (volume_menu_choice)
		{
		case 1:
		{
			cout << "\nWhat's the radius of your cylinder?\t";
			cin >> cyl_r;
			cout << "\nWhat's the height of you cylinder?\t";
			cin >> cyl_h;

			CYLINDER(cyl_r, cyl_h);
		}
		break;

		case 2:
		{
			cout << "\nWhat's the radius of your sphere?\t";
			cin >> sph_r;

			SPHERE(sph_r);
		}
		break;

		default:
		{cout << "Invalid Choice Given" << endl; }
		}
		break;
	}
	case 3:
	{
		int
			row,
			column;

		cout << "\nHow many rows would you like to draw?\t";
		cin >> row;

		cout << "\nHow many columns would you like to draw?\t";
		cin >> column;

		BOX(row, column);
	}
	}
	return 0;
}