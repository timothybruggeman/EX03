#ifndef HEADER_H_
#define HEADER_H_
#include<iostream>
using namespace std;

class LinearEquation {

public:
	LinearEquation() {
		a = b = c = d = e = f = 0;
	}

	void seta(int a1) {
		a = a1;
	}
	void setb(int b1) {
		b = b1;
	}
	void setc(int c1) {
		c = c1;
	}
	void setd(int d1) {
		d = d1;
	}
	void sete(int e1) {
		e = e1;
	}
	void setf(int f1) {
		f = f1;
	}


	double geta() {
		return a;
	}
	double getb() {
		return b;
	}
	double getc() {
		return c;
	}
	double getd() {
		return d;
	}
	double gete() {
		return e;
	}
	double getf() {
		return f;
	}

	bool isSolvable() {
		if ((geta()*getd() - getb()*getc()) != 0) {
			return true;
		}
		else {
			return false;
		}
	}

	double getx() {
		return ((gete()*getd() - getb()*getf()) / (geta()*getd() - getb()*getc()));
	}
	double gety() {
		return ((geta()*getf() - gete()*getc()) / (geta()*getd() - getb()*getc()));
	}

private:
	double a, b, c, d, e, f;
};
#endif