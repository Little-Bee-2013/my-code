#include <iostream>
using namespace std;
int main() {
	int n = 10;
	int *p = &n;
	cout << sizeof(p) << endl;
	return 0;
}
