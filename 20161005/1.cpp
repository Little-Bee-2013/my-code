#include <iostream>
using namespace std;
struct computer {
	string name;
	string cpu;
	string memory;
	string weight;
	string screen;	
};
computer cpt[3] = {
	{"华为", "酷睿i5处理器", "8G", "1.38kg", "1920*1080"},
	{"小米", "酷睿i3处理器", "16G", "1.21kg", "1366*178"},
	{"联想", "酷睿i7处理器", "16G", "1.12kg", "1920*1080"},
};
void showcomputer(computer *cpt, int len) {
	for(int i = 0; i < len; i ++) {
		cout << "==================" << endl;
		cout << "品牌" << (cpt + i) -> name << endl;
		cout << "CPU规格：" << (cpt + i) -> cpu << endl;
		cout << "内存容量：" << (cpt + i) -> memory << endl;
		cout << "重量：" << (cpt + i) -> weight << endl;
		cout << "屏幕尺寸：" << (cpt + i) -> screen << endl;
	}
}
int main() {
	int len = sizeof(cpt) / sizeof(computer);
	showcomputer(cpt, len);
	return 0;
}
