#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int *p;
	int **pp;
	p = &a;
	pp = &p;
	cout << a << "=" << *p << "=" << **pp << endl;
}
