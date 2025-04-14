#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "enter youre favorit number" << endl;
	cin >> num;
	if (num == 10)
		cout << "that's my favorite number too!" << endl;
	else if (num < 10)
		cout << "that's a low number!" << endl;
	else if (num > 10)
		cout << "that's a high number!" << endl;
