#ifndef HEADER_H_
#define HEADER_H_
#include<iostream>

class LinearEquation {
private:
	double x1, y1, x2, y2, x3, y3, x4, y4;
public:
	void setx1(double xa) {
		x1 = xa;
	}
	void sety1(double ya) {
		y1 = ya;
	}
	void setx2(double xb) {
		x2 = xb;
	}
	void sety2(double yb) {
		y2 = yb;
	}
	void setx3(double xc) {
		x3 = xc;
	}
	void sety3(double yc) {
		y3 = yc;
	}
	void setx4(double xd) {
		x4 = xd;
	}
	void sety4(double yd) {
		y4 = yd;
	}


	double getx1() {
		return x1;
	}
	double gety1() {
		return y1;
	}
	double getx2() {
		return x2;
	}
	double gety2() {
		return y2;
	}
	double getx3() {
		return x3;
	}
	double gety3() {
		return y3;
	}
	double getx4() {
		return x4;
	}
	double gety4() {
		return y4;
	}
	double solveForIntersectionX() {
		double mi = ((getx1() - getx2()) / (gety1() - gety2())), mii = ((getx3() - getx4()) / (gety3() - gety4()));
		double bi = (gety1() - (mi * getx1())), bii = (gety3() - (mii * getx3()));
		double X = ((bii - bi) / (mi - mii));
		double Y = ((mi*X) + bi);
		return X;
	}
	double solveForIntersectionY() {
		double mi = ((getx1() - getx2()) / (gety1() - gety2())), mii = ((getx3() - getx4()) / (gety3() - gety4()));
		double bi = (gety1() - (mi * getx1())), bii = (gety3() - (mii * getx3()));
		double X = ((bii - bi) / (mi - mii));
		double Y = ((mi*X) + bi);
		return Y;
	}
}
#endif