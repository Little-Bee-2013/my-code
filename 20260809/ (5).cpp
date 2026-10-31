//赦免战俘
//输入一个偶数N(N<=10000)，验证4~N所有偶数是否符合哥德巴赫猜想：任一大于2的偶数都可写成两个质数之和。如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案例如10，10=3+7=5+5，则10=5+5 是错误答案。输入一个N，输出4=2+2 6=3+3 ...... N=x+y
#include <iostream>
using namespace std;
int f(int x) {
	for(int i = 2; i * i < x; i++) {
		if(x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int g(int a){
	for(int i = 2; i <= a - 2; i++) {
		if(f(i) && f(a - i)) {
			cout <<  a << "=" << i << "+" << a - i << endl;
			return 0;
		}
	}
}
int main() {
	int n;
	cin >> n;
	for(int i = 4; i <= n; i += 2) g(i);
	return 0;
}
