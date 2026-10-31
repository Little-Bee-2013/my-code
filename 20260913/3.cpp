#include <iostream>
using namespace std;
int main() {
	int ans1 = 0, ans2 = 0;
	int n, m;
	cin >> n >> m;
	for(int i = 0; i <= n; i ++)
		for(int j = 0; j <= m; j ++)
			for(int k = i + 1; k <= n; k ++)
				for(int l = j + 1; l <= m; l ++)
					if (l - j == k - i) ans1 ++;
						else ans2 ++;
	cout << ans1 << " " << ans2;
	return 0;
}
