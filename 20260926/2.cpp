#include <iostream>
#include <string>
using namespace std;
int main() {
	string a[100], box = "", b;
	cin >> b;
	int w = 0, sc[100], z = 0;
	for(int i = 0; i <= b.length(); i ++) {
		if(b[i] != ',') box += b[i];
		else {
			a[w] = box;
			w ++;
			box = "";
		}
	}
	for(int i = 0; i < w; i ++){
		if(a[i].length() <= 12 && a[i].length() >= 6)
			for(int j = 0; j < a[i].length(); j ++){
				char x = a[i][j];
				z = 0;
                if(x == 'A' || x == 'B' || x == 'C' || x == 'D' || x == 'E' || x == 'F' || x == 'G' || x == 'H'
                 || x == 'I' || x == 'J' || x == 'K' || x == 'L' || x == 'M' || x == 'N' || x == 'O' || x == 'P'
                 || x == 'Q' || x == 'R' || x == 'S' || x == 'T' || x == 'U' || x == 'V' || x == 'W' || x == 'X'
                 || x == 'Y' || x == 'Z'
                 || x == 'a' || x == 'b' || x == 'c' || x == 'd' || x == 'e' || x == 'f' || x == 'g' || x == 'h'
                 || x == 'i' || x == 'j' || x == 'k' || x == 'l' || x == 'm' || x == 'n' || x == 'o' || x == 'p'
                 || x == 'q' || x == 'r' || x == 's' || x == 't' || x == 'u' || x == 'v' || x == 'w' || x == 'x'
                 || x == 'y' || x == 'z'
                 || x == '0' || x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7'
                 || x == '8' || x == '9'
                 || x == '!' || x == '@' || x == '#' || x == '$') z = 1;
                else {
                    z = 0;
                    break;
                }
			}
            if(z = 1) cout << a [i] << endl;
	}
	return 0;
}
