#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> vec(5);
	vec.push_back(12);
	cout << vec[5] << endl;
	vec.insert(vec.begin() + 2, 18);
	cout << vec[2] << endl;
	vec.clear();
	cout << vec.size() << endl;
	return 0;
}
