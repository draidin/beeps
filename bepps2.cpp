#include<iostream>
#include<windows.h>
using namespace std;

//function declaration
void TooManyBeeps(int pitch, int freq, int num);


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
	//call the function
	TooManyBeep(freq, dur, n);


}//end of main

//function definition
void TooManyBeeps(int pitch, int freq, int num) {
	// this plays a beep of pitch "freq" and duration "dur" n times
	for (int i = 0; i < num; i++)
		Beep(pitch, freq);
}
