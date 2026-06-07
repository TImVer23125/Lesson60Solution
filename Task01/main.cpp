#include <iostream>
#include "logic.h"

using namespace std;

int main() {
	int x = 10;
	int y = 7;

	cout << "before: x =  " << x << ", y = " << y << ".\n";

	swapping(&x, &y);

	cout << "after: x =  " << x << ", y = " << y << ".\n";

	return 0;
}