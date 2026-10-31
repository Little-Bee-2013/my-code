#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> vec(5);
	vec[0] = 1;
	vec[1] = 2;
	vec[3] = 4;
	vec[4] = 5;
	for(int i = 0; i < vec.size(); i ++)
		cout << vec.at(i) << endl;
	return 0;
}
