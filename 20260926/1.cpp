//公鸡是x元/只，母鸡是y元/只，小鸡z只/元，
//有n元，买m只鸡，共有多少种方案？ 

#include <iostream>
using namespace std;
int main() {
	int x, y, z, n, m, a = 0; 
	cin >> x >> y >> z >> n >> m;
	for(int i = 0; i <= m; i ++) for(int j = 0; j <= m - i; j ++) {
		int c = m - i - j;
		if (c % z == 0 && x * i + y * j + c / z == n) a ++;
	}
	cout << a << endl;
	return 0;
}
