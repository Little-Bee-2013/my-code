#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> vec(5);
	vec[0] = 1;
	vec[1] = 2;
	vec[2] = 3;
	vec[3] = 4;
	vec[4] = 5;
	vector<int>:: iterator it;
	for(it = vec.begin(); it != vec.end(); it ++)
		cout << *it << endl;
	return 0;
}
