/*
Breanna Gateley - 9/21/17 Period 4
Assignment name: Display Name
Making text display on the console in visual studio
*/
#include <iostream>
#include <conio.h>
using namespace std;
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
void main() {
	char j = '4';
	cout << "Period " << j << endl;
	cout << "Breanna Gateley" << endl;
	cout << "Hello World!" << endl;
	cout << "Welcome to my First Egg" << endl;
	cout << "I am a professional coding genius" << endl;
	cout << "   ooo   " << endl;
	cout << "  o   o  " << endl;
	cout << " o OwO o " << endl;
	cout << "  o   o  " << endl;
	cout << "   ooo   " << endl;
	cout << " Bow down to Egg-kun desu~" << endl;

	pause(); 
	return; 
}