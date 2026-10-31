#include <iostream>
using namespace std;
struct student {
	string name;
	int group;
	float score;
} stu[6] = {
	{"小明", 1, 98}, {"小志", 2, 88}, {"小刚", 3, 97},
	{"小豆", 2, 92}, {"多多", 1, 82}, {"小新", 2, 83}
};
void showStudent (student *ptr, int len){
	printf("序号\t姓名\t班级\t分数");
	for(int i = 0; i < len; i ++) {
		string n = (ptr + 1) -> name;
		int g = (ptr + i) -> group;
		float s = (ptr + i) -> score;
		printf("%d \t %s \t %d \t %1.f \n", i + 1, n.c_str(), g, s);
	}
}
int main() {
	int len = sizeof(stu)/sizeof(struct student);
	showStudent (stu, len);
	return 0;
}
