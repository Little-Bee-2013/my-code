#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> vec(5);
	vec[0] = 1;
	vec[1] = 2;
	vec[3] = 4; 
	vec[4] = 5;
	cout << vec[1] << endl;
	cout << vec.at(3) << endl;;
	cout << vec.front() << endl;
	cout << vec.back() << endl;
	return 0;
}
