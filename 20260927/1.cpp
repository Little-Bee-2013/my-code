#include <iostream>
using namespace std;
struct ListItem {
	int val;
	struct ListItem *next;
};
int main() {
	ListItem a, b, c, d, e;
	ListItem * item = &a;
	a.val = 1;
	b.val = 2;
	c.val = 3;
	d.val = 4;
	e.val = 5;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = NULL;
	while(item) {
		printf("listitem µÄÖµ£º%d \n", item -> val);
		item = item -> next;
	}
	return 0;
}
