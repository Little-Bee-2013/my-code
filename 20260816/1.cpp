#include <iostream>
#include <string>
using namespace std;
string pd() {
	int a, b, c;
	string y; 
	cin >> a >> b >> c;
	if(0.7 * b + 0.3 * c >= 80 && b + c > 140) y = "Excellent";
	else y = "Not excellent";
	return y;
}
int main() {
	int i; 
	cin >> i;
	int d = i - 1;
	string x[i];
	for(; i > 0; i --) x[i-1] = pd();
	for(; d >= 0; d --) cout << x[d] << endl;
	return 0;
}
