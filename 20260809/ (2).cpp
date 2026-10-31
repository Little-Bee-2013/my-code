//阶乘和
//计算出S=1!+2!+3!+...+n! (n≤50)其中“!”表示阶乘，例如:5!=5x4x3x2x1。
#include <iostream>
using namespace std;
int fac(int n) {
	if(n == 1) return 1;
	else return n * fac(n - 1);
}
int sum(int n) {
	int sum = 0;
	for(int i = 1; i <= n; i++)
		sum += fac(i);
	return sum; 
}
int main() {
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}

