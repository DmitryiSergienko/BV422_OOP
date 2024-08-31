#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
	SetConsoleCP(1251);	SetConsoleOutputCP(1251);
	srand(time(NULL));
	string str1, str2;
	getline(cin, str1);
	cout << "Созданная строка: " << str1 << endl;

	cout << "Вывод отдельных индексов: " << str1[0] << " " << str1[2] << " " << str1[4] << endl;
	
	cout << "Length '" << str1 << "' = " << str1.size() << endl;
	for (int i = 0; i < str1.size(); i++) {
		cout << "[" << i << "]:\t" << str1[i] << endl;
	}

	getline(cin, str2);
	if (str1 == str2) {
		cout << "Строки равны!";
	}
	else cout << "Строки НЕ равны!";
	return 0;
}