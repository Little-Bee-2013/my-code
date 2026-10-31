#include <iostream>
using namespace std;
int main() {
	int a = 10;
	double b = 3.5;
	void *p;
	p = &a;
	cout << *(int*)p << endl;
	p = &b;
	cout << *(double*)p << endl;
	return 0;
} 
