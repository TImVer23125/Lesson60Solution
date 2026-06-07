#include <iostream>
using namespace std;


int main() {
	bool flag = true;
	char ch = 'a';
	short sh = 10;
	int integer = 1'000'000;
	float f = 2.5;
	long long l = 1'000'000'000'000;
	double d = 100.123;
	string s = "This";
	

	cout << "size of bool: " << sizeof(flag) << " byte.\n";
	cout << "size of char: " << sizeof(ch) << " bytes.\n";
	cout << "size of short: " << sizeof(sh) << " bytes.\n";
	cout << "size of int: " << sizeof(integer) << " bytes.\n";
	cout << "size of float: " << sizeof(f) << " bytes.\n";
	cout << "size of long long: " << sizeof(l) << " bytes.\n";
	cout << "size of double: " << sizeof(d) << " bytes.\n";
	cout << "size of string: " << sizeof(s) << " bytes.\n";
	cout << "lenght of string s: " << s.size() << " characters.\n";

	return 0;
}
