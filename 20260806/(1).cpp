#include <iostream>
using namespace std;
int main() {
	extern int a;
	cout << "a:" << a << endl;
	return 0;
}
int a = 10;
