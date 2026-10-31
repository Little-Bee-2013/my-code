#include <iostream>
using namespace std;
void test (int &a) {
	a=1;
	cout << a;
} 
int main () {
	int x=0;
	test (x);
	cout << x;
}
//运行结果 11
