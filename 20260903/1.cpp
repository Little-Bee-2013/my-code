#include <iostream>
using namespace std;
//int *p;
int *func() {
	int a = 10;
	int *p = &a;
	return p;
}
int main() {
	int *p1;
	p1 = func();
	cout << *p1 << endl;
	return 0;
}
