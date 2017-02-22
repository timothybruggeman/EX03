#include <iostream>
#include "header.h"
using namespace std;

int main() {
	LinearEquation algebra;

	int a1,b1,c1,d1,e1,f1;
	cout << "Enter numbers a through f." << endl;
	cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1;
	algebra.seta(a1);
	algebra.setb(b1);
	algebra.setc(c1);
	algebra.setd(d1);
	algebra.sete(e1);
	algebra.setf(f1);

	if (algebra.isSolvable()) {
		cout << "x: " << algebra.getx() << endl 
			<< "y: " << algebra.gety() << endl;
	}
	else cout << "The equation has no solution." << endl;
}