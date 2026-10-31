#include <iostream>
using namespace std;
struct student {
	string name;
	int group;
	float score; 
} stu = {"赵刚", 1, 98};
int main() {
	student *ptr = &stu;
	cout << "姓名：" << ptr -> name << endl;
	cout << "班级：" << ptr -> group << endl;
	cout << "分数：" << ptr -> score << endl;
	return 0;
}
