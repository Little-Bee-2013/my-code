//回文数判断
//设计一个程序，可以判断输入的字符串，是否是回文数.如果是回文数，则输出1;否则输出0。回文数:从左到右和从右到左是看一样的。
#include <iostream>
#include <cstring>
using namespace std;
int l;
int Pali_jud(char a[]) {
	l = strlen(a);
	for(int i = 0; i <= l / 2; i ++)
		if(a[i] != a[l - 1 - i])
			return 0;
	return 1;
}
int main() {
	char a[10000];
	cin >> a;
	cout << Pali_jud(a);
	return 0;
}
