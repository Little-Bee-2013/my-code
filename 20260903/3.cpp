#include <iostream>
using namespace std;
void add(int *p) {
	*p = *p + 1;
}
int main() {
	int a = 10;
	int *p = &a;
	add(p);
	cout << a;
	return 0;
}
