#include <iostream> 
using namespace std;
int test(int a) {
	return a * a;
}
int main() {
	cout << (void *)test << endl;
	int (*p) (int a);
	p = test;
	cout << p(5) << endl;
	cout << (*p)(10) << endl;
	return 0;
}
