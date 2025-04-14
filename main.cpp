#include<iostream>
#include<windows.h>
using namespace std;
int main() {

	//variables to set up numbers
	int freq;
	int dur;
	int n;
	//get and store keybord info from user
	cout << "please enter three numbers (frequency, duration, number):" << endl;
	cin >> freq;
	cin >> dur;
	cin >> n;
	//this plays a beep of pitch "freq" aND duration "dur" n times
	for (int i = 0; i < n; i++)
		Beep(freq, dur);


}
