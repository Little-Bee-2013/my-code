#include <iostream>
using namespace std;
int calculate(int x) {
	if(x == 0) return 0;
	printf("%d+%d=%d\n", x, x, x + x);
	return calculate(x - 1);
}
int main() {
	calculate(10);
	return 0;
}
