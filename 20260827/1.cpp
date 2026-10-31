//假设学生的基本信息包括学号、姓名、三门课程成绩以及个人平均成绩。输入n个学生的成绩信息，计算并输出平均分最高的学生信息。
#include <stdio.h>
using namespace std;
struct student {
	int num;
	char name[10];
	int computer, english, math;
	double average;
}; 
int main(void) {
	int i, n;
	struct student s1, max;
	printf("Input n: ");
	scanf("%d", &n);
	printf("Input the student's number, name and course scores\n");
	for(i = 1; i <= n; i ++) {
		printf("No.%d: ", i);
		scanf("%d %s %d %d %d", &s1.num, s1.name, &s1.math, &s1.english, &s1.computer);
		s1.average = (s1.math + s1.english + s1.computer) / 3.0;
		if(i == 1) max = s1;
		if(max.average < s1.average) max = s1;
	}
	printf("num: %d, name: %s, average: %.2lf\n", max.num, max.name, max.average);
	return 0;
}
