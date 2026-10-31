#include <iostream>
using namespace std;
void test (int a[][3]) {
	a[1][1] = 1;
} 
int main () {
	int a[5][3] = {};
	test (a);
	cout << a[1][1];
}
//运行结果 1
