#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	vector<string> student;
	int select;
	do {
		cout << "1.增加植树人员" << endl;
		cout << "2.显示植树人员数量" << endl;
		cout << "3.显示植树人员名单" << endl;
		cout << "4.导出植树人员名单" << endl;
		cout << "5.退出系统" << endl;
		cout << endl << "请选择：";
		cin >> select;
		if(select == 1) {
			string name;
			cout << "输入姓名：";
			cin >> name;
			student.push_back(name);
			cout << endl;
		}
		if(select == 2) {
			cout << "目前报名人员数量：" << student.size() << endl << endl;
		}
		if(select == 3) {
			cout << "植树人员名单：" << endl;
			vector<string>::iterator it = student.begin();
			while(it != student.end()) {
				cout << *it << endl;
				it ++;
			}
			cout << endl;
		}
		if(select == 4) {
			cout << endl;
			ofstream ofs;
			ofs.open("人员名单.txt", ios::out);
			vector<string>::iterator it = student.begin();
			while(it != student.end()) {
				ofs << *it << endl;
				it ++;
			}
			ofs.close();
			cout << "导出完成！" << endl << endl; 
		}
	} while(select != 5);
	return 0;
}
