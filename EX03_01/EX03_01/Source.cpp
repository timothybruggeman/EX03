#include <iostream>
#include "header.h"
using namespace std;


int main() {
	MyPoint origin, newPoint(10.0, 30.5);
	cout << origin.distance(newPoint) << endl;
	return 0;
}