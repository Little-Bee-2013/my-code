#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 20;
	int *f;
	int &ra = a;
	f = &a;
	cout << "a=" << *f << endl;
	ra += 5;
	cout << "a=" << *f << endl;
	return 0;
}
