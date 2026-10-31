#include <iostream>
using namespace std;
int f(int x) {
	cout << "f(" << x << "){";
	int t;
	if(x>1) t = f(x-1)*x; else t=1;
	cout << "=" << t << "}";
	return t;
}
int main () {
	cout << f(3) << endl;
}
//运行结果 f(3){f(2){f(1){=1}=2}=6}6 
