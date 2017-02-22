//#include "stdafx.h"
#include <iostream>
#include "header.h"

; using namespace std;

int main() {
	LinearEquation Intersection;
	double xa, ya, xb, yb, xc, yc, xd, yd;
	cout << "Please enter 4 points." << endl;
	cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
	Intersection.setx1(xa);
	Intersection.sety1(ya);
	Intersection.setx2(xb);
	Intersection.sety2(yb);
	Intersection.setx3(xc);
	Intersection.sety3(yc);
	Intersection.setx4(xd);
	Intersection.sety4(yd);
	cout << "X: " << Intersection.solveForIntersectionX() << endl;
	cout << "Y: " << Intersection.solveForIntersectionY() << endl;
}