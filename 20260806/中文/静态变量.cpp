#include <iostream>
using namespace std;
int count = 1;
int fun() {
	static int count = 10;
	return count -- ;
}
int main() {
	cout << "global" << "\t" << "local static" << endl;
	for(; count <= 10; count ++) {
		cout << count << "\t" << fun() << endl;
	}
	return 0;
}
