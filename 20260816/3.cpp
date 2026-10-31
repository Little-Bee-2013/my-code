#include <iostream>
using namespace std;
void x() {
	int a;
	cin >> a;
	if(a == 0) return;
	x();
	cout << a << " ";
}
int main() {
	x();
	return 0;
}
