#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int state = 0;
	cin >> s;
	for (size_t i = 0; i < s.size(); ++i) {
		if (state == 0) {
			if (s[i] == 'o' || s[i] == 'O')
				state++;
			else
				state = -1;
		}
		else if (state == 1) {
			if (s[i] == 'g')
				state++;
			else if (s[i] == 'o' || s[i] == 'O')
				continue;
		}
		else if (state == 2) {
			if (s[i] == 'i')
				state++;
			else if (s[i] == 'g')
				continue;
			else
				state = -1;
		}
		else if (state == 3) {
			if (s[i] == 'i')
				continue;
			else
				state = -1;
		}
		if (state == -1) {

			cout << "NO" << endl;
			return 0;
		}
	}
	if (state == 3)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
