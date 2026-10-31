#include <iostream>
using namespace std;
void copy_string(char *from, char *to) {
	while(*from != '\0') {
		*to = *from;
		to ++;
		from ++;
	}
	*to = '\0';
}
int main() {
	char a[20] = "c language";
	char b[20] = "very good";
	copy_string(a, b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}
