#include <iostream>
using namespace std;
void test (int a[]) {
	a[0] = 1;
} 
int main () {
	int a[5] = {0};
	test (a);
	cout << a[0];
}
//运行结果 1
