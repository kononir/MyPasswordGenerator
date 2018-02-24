// MyPasswordGenerator.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "fstream"
#include "ctime"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int passwordLength;
	cout << "¬ведите длину парол€: ";
	cin >> passwordLength;
	ofstream fileWithPassword("D:\\Password.txt", ios::out|ios::trunc);
	if(fileWithPassword.is_open())
		for(int i=0; i < passwordLength; i++){
			fileWithPassword << (char)(-(rand()%32));
		}
	system("pause");
	return 0;
}

