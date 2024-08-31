#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
	SetConsoleCP(1251);	SetConsoleOutputCP(1251);
	srand(time(NULL));
	string str;
	getline(cin, str);
	cout << "Созданная строка: " << str << endl;
	return 0;
}