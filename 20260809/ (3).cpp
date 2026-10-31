//质数筛
//输入n(n≤100)个不大于100000的整数。要求全部储存在数组中，去除掉不是质数的数字，依次输出剩余的质数。
#include <iostream>
using namespace std;
int f(int x) {
	for(int i = 2; i < x; i++)
		if(x % i == 0)
			return 0;
	return 1;
}
int main() {
	int n, a[101];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++)
		if(a[i] >= 2 && f(a[i]))
			cout << a[i] << " ";
	return 0;
}
