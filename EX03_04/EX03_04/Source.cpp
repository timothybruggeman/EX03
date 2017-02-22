#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sort(string& s);

int main()
{
	string s = "silent";
	cout << sort(s) << endl;
	return 0;
}

string sort(string& s) {
	sort(s.begin(), s.end());
	return s;
}