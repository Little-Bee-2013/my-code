//最大质因数
//己知正整数n是两个不同的质数的乘积，试求出两者中较大的那个质数。输入一个正整数n。输出一个正整数p，即较大的那个质数。
#include <iostream>
using namespace std;
int f(int x) {
	for(int i = 2; i * i < x; i ++){
		if(x % i == 0){
			return 0; 
		}
	}
	return 1;
}
int g (int a){
	for(int i = a - 1; i >= 2; i --){
		if(a % i == 0){
			if(f(i)) { 
				cout << i;
				return 0;
			}
		}
	}
}
int main()  {
	int n;
	cin >> n;
	g(n);
	return 0;
} 
