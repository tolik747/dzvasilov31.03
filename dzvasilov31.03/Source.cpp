#include <iostream>
#include <Windows.h>
#include<vector>
using namespace std;
int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	short Matrix[][6] =
	{ { 1, 2, 3, 4, 5 },
	  { 2, 2, 1, 1, 5 },
	  { 3, 3, 3, 2, 5 },
	  { 4, 1, 2, 4, 5 },
	  { 5, 5, 5, 5, 5 },
	  { 5, 5, 4, 4, 5 },
	};
	short side = sizeof(Matrix[0]) / sizeof(Matrix[0][0]);
	bool issymmetric = true;
	vector<int>vector;
	srand(time(NULL));
	
	
	// ваш код маЇ бути тут
	if (issymmetric) cout << "ћатриц€ Ч симетрична" << endl;
	else cout << "ћатриц€ Ч не Ї симетрична" << endl;
	return 0;
}
