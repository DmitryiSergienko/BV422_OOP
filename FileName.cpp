#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

const string LOGIN = "Dimka", PASSWORD = "123qweASD";

int main() {
	SetConsoleCP(1251);	SetConsoleOutputCP(1251);
	srand(time(NULL));
	string login;
	cout << "Enter login: "; cin >> login;
	if (LOGIN == login) {
		string password;
		cout << "Enter password: "; cin >> password;
		if (PASSWORD == password) {
			cout << "Welcome\n";
		}
		else {
			cout << "Error, password is not correctly!\n";
		}
	}
	else {
		cout << "Error, '" << login << "' is not exisist\n";
	}
	
	return 0;
}