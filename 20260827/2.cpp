//输入两个不同的整数，把较小的那个数翻倍并输出。输入格式：一行两个正整数(int范围以内)，之间用一个空格隔开。输出格式：一行一个整数，较小数翻倍后的结果。
#include <iostream>
using namespace std;
int main() {
	int a, b;
	int *p;
	cin >> a >> b;
	if(a < b) p = &a;
	else p = &b;
	cout << (*p) * 2 << endl;
	return 0;
}
