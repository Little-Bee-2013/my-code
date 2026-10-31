//回文质数 
//因为151既是一个质数又是一个回文数(从左到右和从右到左是看一样的)，所以151是回文质数。写一个程序来找出范围[a,b](5≤a<b≤100,000,000)(一亿)间的所有回文质数。输入格式:二个整数a和b，输出格式:输出一个回文质数的列表，一行一个。 
#include <bits/stdc++.h>
using namespace std;
int g(long long s) {
	for(int i = 2; i < s; i ++) if(s % i == 0) return 0;
	return 1;
}
int f(long long s) {
	char a[10];
	int count = 0;
	while(s != 0) {
		a[count] = s % 10;
		s = s / 10;
		count ++;
	}
	for(int i = 0; i < count / 2; i ++) {
		if(a[i] != a[count - i - 1]) return 0;
	}
	return 1;
}
int main() {
	long long a, b;
	cin >> a >> b;
	if(a % 2 == 0) a ++;
	for(long long i = a; i <= b; i += 2) {
		if(f(i) != 0) {
			if(g(i) != 0) cout << i << "\n";
		}
	}
	return 0;
}
