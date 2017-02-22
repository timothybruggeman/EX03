#ifndef HEADER_H_
#define HEADER_H_
#include <cstring>

class MyInteger {
private:
	int value;
public:
	MyInteger() {
		value = 0;
	}
	const int getvalue() {
		return value;
	}
	const bool isEven() {
		if (value % 2 == 0)
			return true;
		else return false;
	}
	const bool isOdd() {
		if (!isEven())
			return true;
		else return false;
	}
	const bool isPrime() {
			for (int count = 1; count < value; count++)
			{
				if (value % count != 0)
					continue;
				else
					return false;
			}
			return true;
	}
	//None of this works because I do not know what I am supposed to be comparing, nor do I understand how I am supposed to change it if it is a constant
	/*static bool isEven(const MyInteger&) {
		if (value % 2 == 0)
			return true;
		else return false;
	}
	static bool isOdd(const MyInteger&) {
		if (!isEven())
			return true;
		else return false;
	}
	static bool isPrime(const MyInteger&) {
		for (int count = 1; count < value; count++)
		{
			if (value % count != 0)
				continue;
			else
				return false;
		}
		return true;
	}
	const bool equals(int) {
		if (value == value)
			return true;
		else return false;
	}
	const bool equals(const MyInteger&) {
		if (value == value)
			return true;
		else return false;
	}*/
	//This works, but I don't think this is how I am supposed to do it - I got this off the internet
	static int parseInt(const string&) {
		string myString = "45";
		int value = atoi(myString.c_str());
	}
};


#endif
