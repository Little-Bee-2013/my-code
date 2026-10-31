//计算阶乘
//求n!(n≤12)，也就是1x2x3...xn。挑战:尝试不使用循环语句(for、whi1e)完成这个任务。
#include <iostream>
using namespace std;
int f(int x) {
	if(x == 1 || x == 0) return 1;
	else return x * f(x - 1);
} 
int main() {
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}
