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

	cout << "Вывод отдельных индексов: " << str[0] << " " << str[2] << " " << str[4] << endl;
	
	cout << "Length '" << str << "' = " << str.size() << endl;
	for (int i = 0; i < str.size(); i++) {
		cout << "[" << i << "]:\t" << str[i] << endl;
	}
	return 0;
}