#include <iostream>
#include <string>
using namespace std;
int n;
struct student {
	string name;
	int ch, ma, en;
	int getSum() {
	return ch + ma + en;
	}
}ans, a;
int main() {
	cin >> n;
	ans.ch = -1;
	for(int i = 1; i <= n; i ++) {
		cin >> a.name >> a.ch >> a.ma >> a.en;
		if(a.getSum() > ans.getSum()) ans = a;
	}
	cout << ans.name << " " << ans.ch << " " << ans.ma << " " << ans.en << endl;
	return 0;
}
