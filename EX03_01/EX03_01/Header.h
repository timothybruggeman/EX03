#ifndef HEADER_H_
#define HEADER_H_

class MyPoint {

public: 
	MyPoint() {
		x = 0, y = 0;
	}
	MyPoint(double x1, double y1) {
		x = x1; y = y1;
	}
	double getx() {
		return x;
	}
	double gety() {
		return y;
	}
	double distance(MyPoint p) {
		return sqrt(pow(getx() - p.getx(), 2) + pow(gety() - p.gety(), 2));
	}
private:
	double x, y;
};
#endif