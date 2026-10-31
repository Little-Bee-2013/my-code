#include <iostream>
using namespace std;
void move(int n, char a, char b, char c) {
	if(n == 1) cout << n << ":" << a << "-->" << c << endl;
	else {
		move(n - 1, a, c, b);
		cout << n << ":" << a << "-->" << c << endl;
		move(n - 1, b, a, c);
	}
}
int main() {
	int disk = 3;
	move (disk, 'a', 'b', 'c');
	return 0;
}
