#include <iostream>
#include <string>
using namespace std;
int n;
struct student {
	int ch, ma, en;
}s[1005];
bool check(int i, int j) {
	if(s[i].ch - s[j].ch > 5 || s[i].ch - s[j].ch < -5 ||
	s[i].ma - s[j].ma > 5 || s[i].ma - s[j].ma < -5 ||
	s[i].en - s[j].en > 5 || s[i].en - s[j].en < -5 ||
	s[i].ch + s[i].ma + s[i].en - s[j].ch - s[j].ma - s[j].en < -10 ||
	s[i].ch + s[i].ma + s[i].en - s[j].ch - s[j].ma - s[j].en > 10) return false;
	return true;
}
int main(){
	int sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++) cin >> s[i].ch >> s[i].ma >> s[i].en;
	for(int i = 1; i < n; i ++) {
		for(int j = i + 1; j <= n; j ++) if(check(i, j)) sum ++;
	}
	cout << sum;
	return 0;
}
