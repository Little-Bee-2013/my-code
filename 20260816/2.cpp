#include <iostream>
using namespace std;
int main(){
	int a, b, c = 0;
	cin >> a >> b;
	int x[b - a + 1], max = b, count = 0; 
	for (int i = b; i > 0; i --) x[i - a] = i;
	for(; max > 0; count ++) max /= 10;
	for (int cs = 0, i = b - a; i >= 0; i --) for(int g = count; g > 0; g --) {
		x[i] %= 10;
		if(x[i] == 2) c ++;
	}
	cout << c;
	return 0;
}
