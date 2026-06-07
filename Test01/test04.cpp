#include <iostream>
using namespace std;


int main() {
	bool* flag;
	char* ch;
	short* sh;
	int* integer;
	float* f;
	long long* l;
	double* d;
	string* s;
	void* v;

	cout << "size of bool*: " << sizeof(flag) << " byte.\n";
	cout << "size of char*: " << sizeof(ch) << " bytes.\n";
	cout << "size of short*: " << sizeof(sh) << " bytes.\n";
	cout << "size of int*: " << sizeof(integer) << " bytes.\n";
	cout << "size of float*: " << sizeof(f) << " bytes.\n";
	cout << "size of long long*: " << sizeof(l) << " bytes.\n";
	cout << "size of double*: " << sizeof(d) << " bytes.\n";
	cout << "size of string*: " << sizeof(s) << " bytes.\n";
	cout << "size of void*: " << sizeof(v) << " bytes.\n";

	return 0;
}
