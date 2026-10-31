#include <iostream>
using namespace std;
int f(int x) {
	cout << "f(" << x << "){";
	int t;
	if(x>1) t = f(x-1)*x; else t=1;
	cout << "}=" << t;
	return t;
}
int main () {
	cout << f(3) << endl;
}
