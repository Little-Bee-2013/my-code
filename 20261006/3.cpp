#include <iostream>
using namespace std;
int sum(int x) {
	if(x == 1) return 1;
	return x + sum(x - 1);
} 
int main() {
	int t;
	cout << "输入一个数：";
	cin >> t;
	cout << sum(t) << endl;
	return 0;
}
