#include <iostream>
#include <string>

using namespace std;

int ThirdComma(const string s, const string c){
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(c, pos)) != -1) {
		k++;
		pos++;
		if (k == 3)
			break;
	}
	return pos-1;
}

void Change(string s, const string c, string i) {
	size_t pos = 0;
	while ((pos = s.find(c, pos)) != -1) {
		s.replace(pos, 1, i);
	}
	cout << s;
}

int main() {
	string s;
	string c = ",";
	string i = "**";
	cout << "Enter a string:" << endl;
	cin >> s;
	cout << endl;
	cout << "Index of third comma in the row = " << ThirdComma(s, c) << endl;
	cout << endl;
	cout << "After change:" << endl;
	Change(s,c,i);
	cout << endl;

	return 0;
}